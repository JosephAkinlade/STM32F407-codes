#ifndef UART_H
#define UART_H

enum BAUD
{
	BAUD_2400 = 0xD05,
	BAUD_9600 = 0x341,
	BAUD_115200 = 0x45
	
};

#define USART_TX_ENABLE				USART_CR1_TE
#define USART_RX_ENABLE				USART_CR1_RE

//Initializes the USART of choice
extern void USART_Init(USART_TypeDef* uartPort, uint16_t baud, uint8_t uartMode);
//Transmits single byte serial data
extern void USART_Transmit_Byte(USART_TypeDef* uartPort, char byte);
//Transmits multibyte serial data (excluding NULL) through a configured USART peripheral 
extern void USART_Transmit_String(USART_TypeDef* uartPort, char* pString);
//Transmits multibyte serial data (including NULL) through a configured USART peripheral
extern void USART_Transmit_String_With_Null(USART_TypeDef* uartPort, char* pString);


#endif /* UART_H */
