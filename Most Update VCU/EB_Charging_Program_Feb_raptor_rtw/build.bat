@echo off
set PATH=%PATH%;C:\NXP\S32DS_Power_v2.1\S32DS\build_tools\powerpc-eabivle-4_9\bin;C:\Program Files (x86)\NewEagle\Raptor\2021b_1.0.14409\build;C:\Program Files (x86)\NewEagle\Raptor\2021b_1.0.14409\GCM-5605B-048\lib
set LDFILES=objs\EB_Charging_Program_Feb.o objs\LIN2.o objs\Timer_BGND_9AY_V.o objs\Timer_ooqlV.o objs\XCP_App.o objs\can_2626__0001.o objs\can_2627__0001.o objs\data.o objs\hw_user.o objs\lin_2628__0001.o objs\lin_general.o objs\raptor_printf.o objs\xcp_protocol.o 
@if exist .\objs rmdir /Q /S .\objs > NUL
@mkdir .\objs > NUL
set PATH=%PATH%;C:\NXP\S32DS_Power_v2.1\S32DS\build_tools\powerpc-eabivle-4_9\bin
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/EB_Charging_Program_Feb.o" EB_Charging_Program_Feb.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/EB_Charging_Program_Feb.o" EB_Charging_Program_Feb.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/LIN2.o" LIN2.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/LIN2.o" LIN2.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_BGND_9AY_V.o" Timer_BGND_9AY_V.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_BGND_9AY_V.o" Timer_BGND_9AY_V.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_ooqlV.o" Timer_ooqlV.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/Timer_ooqlV.o" Timer_ooqlV.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/XCP_App.o" XCP_App.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/XCP_App.o" XCP_App.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_2626__0001.o" can_2626__0001.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_2626__0001.o" can_2626__0001.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_2627__0001.o" can_2627__0001.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/can_2627__0001.o" can_2627__0001.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/data.o" data.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/data.o" data.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/hw_user.o" hw_user.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/hw_user.o" hw_user.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_2628__0001.o" lin_2628__0001.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_2628__0001.o" lin_2628__0001.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_general.o" lin_general.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/lin_general.o" lin_general.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/raptor_printf.o" raptor_printf.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/raptor_printf.o" raptor_printf.c 
echo powerpc-eabivle-gcc "@compiler.args" -o "./objs/xcp_protocol.o" xcp_protocol.c 
powerpc-eabivle-gcc "@compiler.args" -o "./objs/xcp_protocol.o" xcp_protocol.c 
if %ERRORLEVEL% NEQ 0 exit /B %ERRORLEVEL%
echo Linking EB_Charging_Program_Feb ...
powerpc-eabivle-gcc -o EB_Charging_Program_Feb.elf "@hw_linker.args"
if %ERRORLEVEL% NEQ 0 exit /B %ERRORLEVEL%
powerpc-eabivle-objcopy -I elf32-powerpc -O ihex EB_Charging_Program_Feb.elf EB_Charging_Program_Feb.hex
powerpc-eabivle-nm -a EB_Charging_Program_Feb.elf > EB_Charging_Program_Feb.sym
echo Copy : EB_Charging_Program_Feb.hex 
copy EB_Charging_Program_Feb.hex "C:\Users\jerod\OneDrive\Documents\School-Files\Boat_Team\GitHubFiles\Most Update VCU\EB_Charging_Program_Feb_raptor_rtw\EB_Charging_Program_Feb_079.hex" /Y
