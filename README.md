# pwm_pico

This is a simple program written in C for using pwm on raspberry pico, it's essential that you install pico SDK before using this code. I found it the easiest to setup CMakeLists.txt file then using make to get binary file which you can flash onto the pico. 

By default the pwm = 0 % , by clicking button on pico (the bootsel button) you can freely change it to whatever value you need.

To perform IO operation with pico you can use a simple terminal emulator program like minicom.
The output pin is set to gpio0.
