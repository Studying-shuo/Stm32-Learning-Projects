#include "stm32f10x.h"   // Device header
#include "LED.h"
#include "delay.h"
#include "KEY.h"

uint16_t Key_Num;

int main() {
	
	LED_Init();
	Key_Init();
	
	
	while(1){
		RED ();
		Green ();
		Yellow ();
		
		Key_Num = Key_GetNum();
		
		if(Key_Num == 1){
			Light_Blow();
		}
			
	}
}