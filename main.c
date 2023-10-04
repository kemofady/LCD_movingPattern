
/* library **/
#include<util/delay.h>
#include"STD_TYPES.h"
#include"BIT_MATH.h"
/* mcal */

#include"DIO_driver/Dio_Interface.h"

/* own  drive*/

#include"LCD_driver/LCD_interface.h"
 //--------------------------------------
//name in Arabic

u8 arr_fristarabicletter[7]={
	0b00111,
	0b00100,
	0b00100,
	0b00100,
	0b11100,
	0b00000,
	0b00000
};
u8 arr_secondarabicletter[7]={
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00111,
	0b01000,
	0b10000
};
u8 arr_thirdarabicletter[7]={
	0b00000,
	0b00000,
	0b00001,
	0b00001,
	0b11111,
	0b00000,
	0b11011

};
u8 arr_fourtharabicletter[7]={
	0b00000,
	0b00000,
	0b00000,
	0b00110,
	0b01001,
	0b01110,
	0b10000,
	0b10000
};
//---------------------------------------------------
u8 arr_manmouvingpattern1[8]={
	0b00100,
	0b01010,
	0b00100,
	0b01110,
	0b00100,
	0b00100,
	0b01010,
	0b00000
};

u8 arr_manmouvingpattern2[8]={
	0b00100,
	0b01010,
	0b00100,
	0b01110,
	0b00100,
	0b00110,
	0b00101,
	0b00000
};


void main(){
	LCD_voidinit();


	LCD_voidpattern(0,arr_manmouvingpattern1);
	LCD_voidpattern(1,arr_manmouvingpattern2);

	while(1){
			u8 pattern=1;
			u8 column=0;
			for(column=0;column<16;column++){
				pattern^=1;  //To be placed once by 1 and once by 0
				LCD_gotoxy(0,column);
				LCD_voidsenddata(pattern);
				_delay_ms(150);
				LCD_voidclearscrean();  // clear name*/

			}

	}

