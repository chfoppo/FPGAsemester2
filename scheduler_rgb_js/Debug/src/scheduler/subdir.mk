################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/scheduler/ttc_scheduler_o.c 

OBJS += \
./src/scheduler/ttc_scheduler_o.o 

C_DEPS += \
./src/scheduler/ttc_scheduler_o.d 


# Each subdirectory must supply rules for building sources it contributes
src/scheduler/%.o: ../src/scheduler/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__USE_CMSIS=CMSISv1p30_LPC17xx -D__CODE_RED -D__NEWLIB__ -I"Z:\LPC\CHFworksp\Lib_CMSISv1p30_LPC17xx\inc" -I"Z:\LPC\CHFworksp\Lib_EaBaseBoard\inc" -I"Z:\LPC\CHFworksp\Lib_MCU\inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


