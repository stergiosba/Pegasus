################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
utils/%.obj: ../utils/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"G:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c2000_21.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 -O2 --include_path="C:/Users/Stergios/Desktop/Codeground/NEW_ECAT/Pegasus/f2838x_cpu1_allocate_ecat_to_cm/utils" --include_path="C:/Users/Stergios/Desktop/Codeground/NEW_ECAT/Pegasus/f2838x_cpu1_allocate_ecat_to_cm" --include_path="C:/Users/Stergios/Desktop/Codeground/NEW_ECAT/Pegasus/f2838x_cpu1_allocate_ecat_to_cm/device" --include_path="G:/ti/c2000/C2000Ware_4_00_00_00/driverlib/f2838x/driverlib" --include_path="G:/ti/c2000/C2000Ware_4_00_00_00/device_support/f2838x/common/include" --include_path="G:/ti/c2000/C2000Ware_4_00_00_00/libraries/communications/Ethercat/f2838x/include" --include_path="G:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c2000_21.6.0.LTS/include" --define=DEBUG --define=_FLASH --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="utils/$(basename $(<F)).d_raw" --obj_directory="utils" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


