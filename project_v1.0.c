/**
 * \page appdoc_main MEGA LED Example
 *
 * Overview:
 * - \ref appdoc_mega_led_app_intro
 * - \ref appdoc_mega_led_app_usage
 * - \ref appdoc_mega_led_app_compinfo
 * - \ref appdoc_mega_led_app_contactinfo
 *
 * \section appdoc_mega_led_app_intro Introduction
 * This application demonstrates a simple example turn on and off the board LED.
 *
 * This application has been tested on following boards:
 * - ATmega328p Xplained Mini
 * - ATmega328pb Xplained Mini
 * - ATmega168pb Xplained Mini
 * - ATmega324pb Xplained PRO
 *
 * \section appdoc_mega_led_app_usage Usage
 * The application uses button to control the LED, 
 * once the button is pressed, LED0 will turn on
 * once the button is released, LED0 will turn off
 *
 * \section appdoc_mega_led_app_compinfo Compilation Info
 * This software was written for the GNU GCC and IAR for MEGA.
 * Other compilers may or may not work.
 *
 * \section appdoc_mega_led_app_contactinfo Contact Information
 * For further information, visit
 * <a href="http://www.atmel.com">http://www.atmel.com</a>.
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#include <asf.h>
int main (void)
{
	/* set board io port */
	board_init();
	bool button_state;
	while(1){
		button_state = ioport_get_pin_level(GPIO_PUSH_BUTTON_0);
		if(button_state){
			LED_Off(LED0);
		}else{
			LED_On(LED0);
		}
	}	
}
