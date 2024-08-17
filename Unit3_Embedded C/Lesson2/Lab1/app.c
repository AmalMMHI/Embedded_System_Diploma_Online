#include "uart.h"
unsigned char string_buffer[100] = "learn_in_depth:Amal";

void main (void){
	Uart_send_string (&string_buffer[0]);
}
