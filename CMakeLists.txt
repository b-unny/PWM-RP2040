cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_COMPILER 17)

set(PICO_BOARD pico_w CACHE STRING "Board type")

include(pico_sdk_import.cmake)

project(PWM_U4C7 C CXX ASM)

pico_sdk_init()

add_executable(PWM_U4C7 main.c)

#pico_generate_pio_header(PWM_U4C7 ${CMAKE_CURRENT_LIST_DIR}/ws2812.pio)

target_link_libraries(PWM_U4C7 pico_stdlib hardware_pwm hardware_clocks)

# Habilitar saída USB (opcional)
pico_enable_stdio_usb(PWM_U4C7 1)
pico_enable_stdio_uart(PWM_U4C7 0)

pico_add_extra_outputs(PWM_U4C7)

# Add executable. Default name is the project name, version 0.1
pico_set_program_name(PWM_U4C7 "PWM_U4C7")
pico_set_program_version(PWM_U4C7 "0.1")

# Add the standard include files to the build
target_include_directories(PWM_U4C7 PRIVATE ${CMAKE_CURRENT_LIST_DIR})

# Add any user requested libraries
target_link_libraries(PWM_U4C7)


