/* 
 * File:   application.c
 * Author: Marwa Abdelrahman
 *
 * Created on August 1, 2024, 12:53 AM
 */


#include"application.h"



led_t led_0={.port_name=PORTC_INDEX,.pin=GPIO_PIN0,.led_state=GPIO_STATE_HIGH};
led_t led_1={.port_name=PORTC_INDEX,.pin=GPIO_PIN1,.led_state=GPIO_STATE_HIGH};
led_t led_2={.port_name=PORTC_INDEX,.pin=GPIO_PIN2,.led_state=GPIO_STATE_HIGH};
led_t led_3={.port_name=PORTC_INDEX,.pin=GPIO_PIN3,.led_state=GPIO_STATE_HIGH};


direction_t led_state;
Std_RetrunType ret=E_OK;
port_t port_c;
uint8 port_state;


int main() {
    app_init();

while(1){
    
    ret=led_toggle(&led_0);
    ret=led_toggle(&led_1);
    ret=led_toggle(&led_2);
    ret=led_toggle(&led_3);
    __delay_ms(500); 
}
    return (EXIT_SUCCESS);
}

void app_init(void){
  
    ret=led_init(&led_0);
    ret=led_init(&led_1);
    ret=led_init(&led_2);
    ret=led_init(&led_3);
    
}