/*
 * Frequency meter on C-language
 */

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

const int LCD_RS = MCU_SPI_PORTB_PB0; //
//const int  LCD_RW = MCU_PIN; //
const int  LCD_E = MCU_SPI_PORTB_PB1; //
const int  LCD_DB0 = MCU_USART_PORTD_PD0_RXD; //
const int  LCD_DB1 = MCU_USART_PORTD_PD1_TXD; //
const int  LCD_DB2 = MCU_USART_PORTD_PD2; //
const int  LCD_DB3 = MCU_USART_PORTD_PD3; //
const int  LCD_DB4 = MCU_USART_PORTD_PD4; //
const int  LCD_DB5 = MCU_USART_PORTD_PD5; //
const int  LCD_DB6 = MCU_USART_PORTD_PD6; //
const int  LCD_DB7 = MCU_USART_PORTD_PD7; //

LiquidCrystal LCD_1602(LCD_RS, LCD_E, LCD_DB0, LCD_DB1, LCD_DB2, LCD_DB3, LCD_DB4, LCD_DB5, LCD_DB6, LCD_DB7); //

const int SYNC = MCU_TWI_PORTC_ADC_PC5_A5_SCL; //

float ResultOfFrequency; //Result Of Frequency
int PulseMode; //Pulse Mode
int PulseEnable; //Pulse Enable

int main(){

pinMode(SYNC, INPUT); //
LCD_1602.begin(16, 2); //
LCD_1602.setCursor(0, 0); //
LCD_1602.print("Frequency Meter"); //
}


void config(){
  
}
