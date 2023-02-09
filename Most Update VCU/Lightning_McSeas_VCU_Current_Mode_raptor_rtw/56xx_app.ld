

/* Entry Point */
ENTRY(_start)

/* define heap and stack size */
__HEAP_SIZE            = 0 ;
__STACK_MARGIN         = 0x100; /* Margin to allow StackMonitor to catch overrun */
__STACK_SIZE           = 2048;

SRAM_SIZE =  64K;    
/* Define SRAM Base Address */
SRAM_BASE_ADDR = 0x40000000;

    
MEMORY
{
    
    flash_app_desc      : org = 0x00020000,   len = 0x000100    /* Application description 					*/
    flash_app           : org = 0x00020100,   len = 0x09FF00    /* Application 5x128                        */
    
    

    
    flash_end           : org = 0x000BFFFF,   len = 0           /* End Application Marker                    */
	  
    /* RAM 64K Total */
    sram_memory : org = 0x40000000, len = 64K - 128
    
    bootmailbox : org = 0x4000FF80, LENGTH = 128
     
}


SECTIONS
{
    
    /* Not part of the application used during debug */
	.app_desc : 
	{
		__ROM_IMAGE_START = .;
		KEEP(*(.app_desc))
		__gccbegin_rom = .;
	} > flash_app_desc
	
	.startup : ALIGN(0x400)
    {
    __start = . ;
    	*(.startup)
    } > flash_app
	
	 .core_exceptions_table   : ALIGN(4096)
    {
      __IVPR_VALUE = . ;
      KEEP(*(.core_exceptions_table))
    } > flash_app

    .intc_vector_table   : ALIGN(4096)
    {
       KEEP(*(.intc_vector_table))
    } > flash_app
      
    .text : 
    {
      *(.text.startup)
      *(.text)
      *(.text.*)
      KEEP (*(.init))
      KEEP (*(.fini))  
      . = ALIGN(16);
    } > flash_app
      
    .ctors :
    {
      __CTOR_LIST__ = .;
      /* gcc uses crtbegin.o to find the start of
         the constructors, so we make sure it is
         first.  Because this is a wildcard, it
         doesn't matter if the user does not
         actually link against crtbegin.o; the
         linker won't look for a file to match a
         wildcard.  The wildcard also means that it
         doesn't matter which directory crtbegin.o
         is in.  */
      KEEP (*crtbegin.o(.ctors))
      KEEP (*crtbegin?.o(.ctors))
      /* We don't want to include the .ctor section from
         from the crtend.o file until after the sorted ctors.
         The .ctor section from the crtend file contains the
         end of ctors marker and it must be last */
      KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors))
      KEEP (*(SORT(.ctors.*)))
      KEEP (*(.ctors))
      __CTOR_END__ = .;
    } > flash_app

    .dtors :
    {
      __DTOR_LIST__ = .;
      KEEP (*crtbegin.o(.dtors))
      KEEP (*crtbegin?.o(.dtors))
      KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors))
      KEEP (*(SORT(.dtors.*)))
      KEEP (*(.dtors))
      __DTOR_END__ = .;
    } > flash_app
        
    .preinit_array :
    {
      PROVIDE_HIDDEN (__preinit_array_start = .);
      KEEP (*(.preinit_array*))
      PROVIDE_HIDDEN (__preinit_array_end = .);
    } > flash_app

    .init_array :
    {
      PROVIDE_HIDDEN (__init_array_start = .);
      KEEP (*(SORT(.init_array.*)))
      KEEP (*(.init_array*))
      PROVIDE_HIDDEN (__init_array_end = .);
    } > flash_app

    .fini_array :
    {
      PROVIDE_HIDDEN (__fini_array_start = .);
      KEEP (*(SORT(.fini_array.*)))
      KEEP (*(.fini_array*))
      PROVIDE_HIDDEN (__fini_array_end = .);
    } > flash_app
          
    .rodata :
    {
      *(.rodata)
      *(.rodata.*)
    } > flash_app
    
    .eh_frame_hdr : { *(.eh_frame_hdr) } > flash_app
    .eh_frame     : { KEEP (*(.eh_frame)) } > flash_app 
    
    __gccend_rom = .;
      
    .postbuild_config_desc :
    {
    	__gccbegin_postbuild_config_desc = .;
    	*(.postbuild_config_desc)
    	*(.postbuild_config_desc.*)
    } > flash_app
    
    .postbuild_config_rom :
    {
    	*(.postbuild_config_rom)
    	*(.postbuild_config_rom.*)
    } >  flash_app
    
    .bootmailbox : {KEEP(*(.bootmailbox)) } > bootmailbox AT > flash_app
    
    .stack (NOLOAD) : ALIGN(16) 
    {
      __HEAP = . ;
      PROVIDE (_end = . );
      PROVIDE (end = . );            
      . += __HEAP_SIZE ;
      __HEAP_END = . ;
      . += __STACK_MARGIN;
      __STACK_START = .;
      _stack_end = . ;
      FILL(0xDEADC0DE);
      . +=  __STACK_SIZE;
      _stack_addr = . ;
      __SP_INIT = . ;
      . += 4;
    } > sram_memory
    
	.data   : 
	{
	  *(.data)
	  *(.data.*)
	}  > sram_memory AT > flash_app
    
    .sdata2  :
	{  
	  *(.sdata2)
	  *(.sdata2.*)
	} > sram_memory AT>flash_app

	.sbss2    (NOLOAD)   :
	{
      /* _SDA2_BASE_ = .; */ 
	  *(.sbss2)
	  *(.sbss2.*)
	} > sram_memory
    
    .sdata  :
	{
	  *(.sdata)
	  *(.sdata.*)
	} > sram_memory AT>flash_app
    
	.bss   (NOLOAD)  :
	{
	  __BSS_START = .;
	  *(.sbss)
	  *(.sbss.*)	
      *(.bss)
      *(.bss.*)
      *(COMMON)
      __BSS_END = .;
    } > sram_memory
    
/*-------- LABELS USED IN CODE -------------------------------*/
        
/* Labels for Copying Initialised Data from Flash to RAM */
__DATA_SRAM_ADDR  = ADDR(.data);
__SDATA_SRAM_ADDR = ADDR(.sdata);

__DATA_SIZE   = SIZEOF(.data);
__SDATA_SIZE  = SIZEOF(.sdata);

__DATA_ROM_ADDR  = LOADADDR(.data);
__SDATA_ROM_ADDR = LOADADDR(.sdata);
   
/* Labels Used for Initialising SRAM ECC */
__SRAM_SIZE = SRAM_SIZE;
__SRAM_BASE_ADDR = SRAM_BASE_ADDR;
     
__BSS_SIZE    = __BSS_END - __BSS_START;

    __gcc_ramstart  = ORIGIN(sram_memory);
    __gcc_ramend    = ORIGIN(sram_memory) + LENGTH(sram_memory);
    __gcc_romend    = ORIGIN(flash_end);
    
    __gcc_end_intc_vector_table = ADDR(.intc_vector_table) +  SIZEOF(.intc_vector_table);
/* These special symbols mark the bounds of RAM and ROM images of boot code. */
/* They are used by the GHS startup code (_start and __ghs_ind_crt0).        */

    __gcc_rombootcodeend    = __gccend_rom;
    
    /*__gcc_rombootcodeend    = ADDR(.fixtype) + LENGTH(.fixtype);*/
    
    /* End addresses passed to the Boot Loader, these are the end address */
    /* of each reserved area.                                             */
    __gcc_app_end       = ORIGIN(flash_end);
 
    __gcc_begin_app_desc = ORIGIN(flash_app);
    __gcc_begin_postbuild_config_desc = ADDR(.postbuild_config_desc);
    __gcc_begin_ivor_branch_table = ADDR(.core_exceptions_table);
    
	__ghs_romend = ORIGIN(flash_end);
	
    EXCEPTION_HANDLERS    = ADDR(.core_exceptions_table);
    __IVPR_VALUE = ADDR(.core_exceptions_table);

}


