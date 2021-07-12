//EXERCÍCIO_6
#include <16f628a.h>
#use delay (clock=1000000)
#fuses INTRC_IO,NOWDT,PUT,NOLVP,BROWNOUT,NOMCLR
#include <LCD_EXERCICIO.c> 

long int y=0;

main(){LCD_INI();
       delay_ms(200);
       while(true){LCD_POS_XY(1,1);
                   printf(LCD_ESCREVE,"CONTAGEM: %Lu",y);
                   delay_ms(200);
                   if(!input(PIN_A0)){while(input(PIN_A3)){y++;
                                                           LCD_POS_XY(1,1);
                                                           printf(LCD_ESCREVE,"CONTAGEM: %Lu",y);
                                                           delay_ms(1000);
                                                           printf(LCD_ESCREVE,"");
                                                           }
                                     }
                   if(!input(PIN_A1)){y=0;
                                      LCD_ESCREVE("\f");}
                  }
      }        
       

