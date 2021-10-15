#ifndef USART_CONFIG_H
#define USART_CONFIG_H

/*
	Options :
		1-USART_ASYNCHROUNOUS_OPERATION
		2-USART_SYNCHROUNOUS_OPERATION
*/
#define USART_MODE_SELECTION	USART_ASYNCHROUNOUS_OPERATION

/*
	Options:
		1-USART_PARITY_MODE_DISABLE
		2-USART_PARITY_MODE_EVEN_ENABLE
		3-USART_PARITY_MODE_ODD_ENABLE
*/

#define USART_PARITY_MODE_SELECTION		USART_PARITY_MODE_DISABLE

/*
	Options:
		1-USART_STOP_BIT_SELECTION_ONE
		2-USART_STOP_BIT_SELECTION_TWO
*/
#define USART_STOP_BIT_SELECTION	USART_STOP_BIT_SELECTION_ONE

/*
Options:
1-USART_CHARACTER_SIZE_SELECTION_5_BIT
2-USART_CHARACTER_SIZE_SELECTION_6_BIT
3-USART_CHARACTER_SIZE_SELECTION_7_BIT
4-USART_CHARACTER_SIZE_SELECTION_8_BIT
5-USART_CHARACTER_SIZE_SELECTION_9_BIT
*/

#define	USART_CHARACTER_SIZE_SELECTION	USART_CHARACTER_SIZE_SELECTION_8_BIT

#define USART_BAUD_RATE_9600	0X33


#endif
