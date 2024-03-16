################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lib/LinkedList.c 

C_DEPS += \
./lib/LinkedList.d 

OBJS += \
./lib/LinkedList.o 


# Each subdirectory must supply rules for building sources it contributes
lib/%.o: ../lib/%.c lib/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-lib

clean-lib:
	-$(RM) ./lib/LinkedList.d ./lib/LinkedList.o

.PHONY: clean-lib

