#include<stdio.h>
#include"pico/stdlib.h"
#include"hardware/pwm.h"
#include"hardware/clocks.h"

#define PWM_PIN 12 // 22: servo  12: led

const uint32_t wrap =  19999; // wrap eh o periodo!!
const float clkdiv = 125.0f;

float level[3]={0.12, 0.0735, 0.025};

void setup_pwm();
void move_servo();

int main()
{
	stdio_init_all();
	setup_pwm();
	
	// move a a seguinte ordem 180-90-0 graus
	for(int i=0; i<3; i++){
	pwm_set_gpio_level(PWM_PIN, (uint32_t)(wrap*level[i]));
	sleep_ms(5000);
	}

	while(1)
	{
		move_servo();
		sleep_ms(1000);
	}
}

void setup_pwm()
{
	gpio_set_function(PWM_PIN, GPIO_FUNC_PWM);
	uint slice = pwm_gpio_to_slice_num(PWM_PIN);
	pwm_set_clkdiv(slice, clkdiv);
	pwm_set_wrap(slice, wrap);
	pwm_set_enabled(slice, 1);

}
void move_servo()
{
	uint slice = pwm_gpio_to_slice_num(PWM_PIN);

	uint32_t max = (uint32_t)(wrap*0.12);
	uint32_t min = (uint32_t)(wrap*0.025);

	for(uint32_t level = min; level <=max ; level +=5){
		pwm_set_gpio_level(PWM_PIN, level);
		sleep_ms(10);
	}

	for(uint32_t level = max; level >= min; level -=5){
		pwm_set_gpio_level(PWM_PIN, level);
		sleep_ms(10);
	}
}
