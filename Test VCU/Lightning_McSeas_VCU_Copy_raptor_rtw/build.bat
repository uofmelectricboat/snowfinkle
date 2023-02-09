@echo off
set PATH=%PATH%;C:\NXP\S32DS_Power_v2.1\S32DS\build_tools\powerpc-eabivle-4_9\bin;C:\Program Files (x86)\NewEagle\Raptor\2021b_1.0.14409\build;C:\Program Files (x86)\NewEagle\Raptor\2021b_1.0.14409\GCM-5605B-048\lib
set LDFILES=objs\LIN2.o objs\Lightning_McSeas_VCU_Copy.o objs\Timer_BGND_9AY_V.o objs\Timer_ooqlV.o objs\XCP_App.o objs\can_753__0002.o objs\can_754__0002.o objs\data.o objs\hw_user.o objs\lin_1428__0007.o objs\lin_general.o objs\raptor_printf.o objs\xcp_protocol.o 
@if exist .\objs rmdir /Q /S .\objs > NUL
@mkdir .\objs > NUL
set PATH=%PATH%;C:\NXP\S32DS_Power_v2.1\S32DS\build_tools\powerpc-eabivle-4_9\bin
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/LIN2.o" LIN2.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/LIN2.o" LIN2.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/Lightning_McSeas_VCU_Copy.o" Lightning_McSeas_VCU_Copy.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/Lightning_McSeas_VCU_Copy.o" Lightning_McSeas_VCU_Copy.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_BGND_9AY_V.o" Timer_BGND_9AY_V.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_BGND_9AY_V.o" Timer_BGND_9AY_V.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_ooqlV.o" Timer_ooqlV.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_ooqlV.o" Timer_ooqlV.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/XCP_App.o" XCP_App.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/XCP_App.o" XCP_App.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_753__0002.o" can_753__0002.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_753__0002.o" can_753__0002.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_754__0002.o" can_754__0002.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_754__0002.o" can_754__0002.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/data.o" data.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/data.o" data.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/hw_user.o" hw_user.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/hw_user.o" hw_user.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_1428__0007.o" lin_1428__0007.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_1428__0007.o" lin_1428__0007.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_general.o" lin_general.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_general.o" lin_general.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/raptor_printf.o" raptor_printf.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/raptor_printf.o" raptor_printf.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/xcp_protocol.o" xcp_protocol.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/xcp_protocol.o" xcp_protocol.c 
if %ERRORLEVEL% NEQ 0 exit /B %ERRORLEVEL%
echo Linking Lightning_McSeas_VCU_Copy ...
powerpc-eabivle-gcc -o Lightning_McSeas_VCU_Copy.elf "@hw_linker.args"
if %ERRORLEVEL% NEQ 0 exit /B %ERRORLEVEL%
powerpc-eabivle-objcopy -I elf32-powerpc -O ihex Lightning_McSeas_VCU_Copy.elf Lightning_McSeas_VCU_Copy.hex
powerpc-eabivle-nm -a Lightning_McSeas_VCU_Copy.elf > Lightning_McSeas_VCU_Copy.sym
echo Copy : Lightning_McSeas_VCU_Copy.hex 
copy Lightning_McSeas_VCU_Copy.hex "C:\Users\jerod\OneDrive\Documents\School-Files\Boat_Team\GitHubFiles\Lightning_McSeas_VCU_Copy_raptor_rtw\Lightning_McSeas_VCU_Copy_013.hex" /Y
