################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/tasks/_7segment.c \
../src/tasks/joystick_controller.c \
../src/tasks/rgb_update.c \
../src/tasks/rotary_controller.c 

OBJS += \
./src/tasks/_7segment.o \
./src/tasks/joystick_controller.o \
./src/tasks/rgb_update.o \
./src/tasks/rotary_controller.o 

C_DEPS += \
./src/tasks/_7segment.d \
./src/tasks/joystick_controller.d \
./src/tasks/rgb_update.d \
./src/tasks/rotary_controller.d 


# Each subdirectory must supply rules for building sources it contributes
src/tasks/%.o: ../src/tasks/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -DDEBUG -D__USE_CMSIS=CMSISv1p30_LPC17xx -D__CODE_RED -D__NEWLIB__ -I"Z:\LPC\CHFworksp\Lib_CMSISv1p30_LPC17xx\inc" -I"Z:\LPC\CHFworksp\Lib_EaBaseBoard\inc" -I"Z:\LPC\CHFworksp\Lib_MCU\inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


