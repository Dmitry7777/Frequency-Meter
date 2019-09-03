#include<avr/io.h>
#include<LiquidCrystal.h>

/*Microcontrollers Atmega8/48/88/168/328 pin out configuration */
/*Interface of Port D*/
#define MCU_USART_PORTD_PD0_RXD 0x00; //
#define MCU_USART_PORTD_PD1_TXD 0x01; //
#define MCU_USART_PORTD_PD2 0x02; //
#define MCU_USART_PORTD_PD3 0x03; //
#define MCU_USART_PORTD_PD4 0x04; //
#define MCU_USART_PORTD_PD5 0x05; //
#define MCU_USART_PORTD_PD6 0x06; //
#define MCU_USART_PORTD_PD7 0x07; //

/*Interface of Port B*/
#define MCU_SPI_PORTB_PB0 0x08; //
#define MCU_SPI_PORTB_PB1 0x09; //
#define MCU_SPI_PORTB_PB2_SS 0x0A; //
#define MCU_SPI_PORTB_PB3_MOSI 0x0B; //
#define MCU_SPI_PORTB_PB4_MISO 0x0C; //
#define MCU_SPI_PORTB_PB5_SCK 0x0D; //

/*Interface of Port C*/
#define MCU_TWI_PORTC_ADC_PC0_A0 0x0E; //
#define MCU_TWI_PORTC_ADC_PC1_A1 0x0F; //
#define MCU_TWI_PORTC_ADC_PC2_A2 0x10; //
#define MCU_TWI_PORTC_ADC_PC3_A3 0x11; //
#define MCU_TWI_PORTC_ADC_PC4_A4_SDA 0x12; //
#define MCU_TWI_PORTC_ADC_PC5_A5_SCL 0x13; //
#define MCU_TWI_PORTC_ADC_PC6_RESET 0x14; //

int main(){

}
