#include "mbed.h"

int main()
{
	DigitalOut led1(LED1);
	while (true)
	{
		led1 = !led1;
		wait_us(1000000);
	}
}