#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#include "hardware/sync.h"
#include "hardware/structs/ioqspi.h"
#include "hardware/structs/sio.h"
#include "hardware/pwm.h"

int main() {
	stdio_init_all();
	gpio_set_function(0, GPIO_FUNC_PWM);
	gpio_set_function(1, GPIO_FUNC_PWM);
	int liczba = 0;

	uint slice_num = pwm_gpio_to_slice_num(0);

	pwm_set_wrap(slice_num, 16);


	pwm_set_enabled(slice_num, true);


		while(true){
			while(get_bootsel_button()){
				pwm_set_chan_level(slice_num, PWM_CHAN_A, 0);
			

		}

			while(get_bootsel_button() != 1){
				printf("current pwm: \r\n");
				printf("%d\n", liczba);
				printf("click to change the % (between 0-100)\r\n");

				pwm_set_chan_level(slice_num, PWM_CHAN_A, 16);
			
			}
		}

}
