#include "lib/include.h"
#include <stdio.h>
char data_str[32] = " ";                //cadena de caracteres
uint8_t dato_recibido = 0; //dato que se recibe
int main(void)
{

//    uint16_t valor = 0;
    char c='5';
    //char b='a';
    Configurar_PLL(_10MHZ);  //Confiuracion de velocidad de reloj
    Configurar_UART4();//Yo FCLK 10MHZ Baudrate 4800

    //Experimento 1
    //  Configurar_UART1(); //Jorge,Alberto,Navarro,Saul,Fabela -fclk 25MHZ Baud-rate 57600
    //  Configurar_UART7(); //Angel,Fernanda,Sonia,Aleidis,Monse -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART4(); //Argelia,Roxana,Yesica,Vanesa,Christian,Abiu -fclk 10MHZ Baud-rate 4800
    //  Configurar_UART2(); //Brizet,Monse,Luis,Majo,Alonso -fclk 40MHZ Baud-rate 115200
    //  Configurar_UART3(); //Jesus,Yesica,Carlos,Dulce,Rodolfo,Leonardo -fclk 80MHZ Baud-rate 19200
    //  Configurar_UART2(); //Andrea,Avila,Pamela,Paulina -fclk 50MHZ Baud-rate 57600
    //  Configurar_UART5(); //Hector,Cecilia,Carolina,Jozzafat -fclk 40MHZ Baud-rate 28800
    Configurar_GPIO();
   // Homogeneidad();

   // printString("Yessica"); 
    //printChar('c\n');
    //printChar(b);
    //printString("\n");
   // char *arr = readString(',');
   // printString(&arr[0]);
    while(1)
    {
        
         c = readChar();
         switch(c)
         {
             case 'r':
                 //GPIODATA port F 662
                 //printChar('a');
                 GPIOF->DATA = (1<<1);sprintf(data_str, "a\n"); break;
                 break;
             case 'b':
                 //GPIODATA port F 662
                // printChar('b');
                 GPIOF->DATA = (1<<2);sprintf(data_str, "b\n"); break; //sprintf contruye una string
                 break;
             case 'g':
                 //GPIODATA port F 662
                // printChar('c');
                 GPIOF->DATA = (1<<3);sprintf(data_str, "c\n"); 
                 break;
             case 'y':
                 //GPIODATA port F 662
                 //printChar('d');
                 GPIOF->DATA = (1<<1) | (1<<3);sprintf(data_str, "d\n"); 
                 break;
             case 'x':
                 //NOMBRE
                  sprintf(data_str, "Yessica\n"); //mandar nombre
                  break;

             default:
                // printChar((char)valor);
                 GPIOF->DATA = (0<<1) | (0<<2) | (0<<3);sprintf(data_str, "\n");
                 break;
                 

         }  
        printString(data_str);
         }
   
}

