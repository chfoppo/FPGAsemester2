################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/tasks/subdir.mk
-include src/system/subdir.mk
-include src/scheduler/subdir.mk
-include src/main/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: scheduler_rgb_js.axf

# Tool invocations
scheduler_rgb_js.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"Z:\LPC\CHFworksp\Lib_CMSISv1p30_LPC17xx\Debug" -L"Z:\LPC\CHFworksp\Lib_EaBaseBoard\Debug" -L"Z:\LPC\CHFworksp\Lib_MCU\Debug" -Xlinker --gc-sections -Xlinker -Map=scheduler_rgb_js.map -mcpu=cortex-m3 -mthumb -T "scheduler_rgb_js_Debug.ld" -o "scheduler_rgb_js.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) scheduler_rgb_js.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size scheduler_rgb_js.axf; # arm-none-eabi-objdump -h -S scheduler_rgb_js.axf >scheduler_rgb_js.lss
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
