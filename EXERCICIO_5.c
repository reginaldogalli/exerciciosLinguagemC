//EXERCÍCIO_5
#include <16f628a.h>
#use delay (clock=1000000)
#fuses INTRC_IO,NOWDT,PUT,NOLVP,BROWNOUT,NOMCLR
#include <LCD_EXERCICIO.c>

main(){LCD_INI();
       delay_ms(200);
       LCD_POS_xy(3,1);
       printf(LCD_ESCREVE,"Hello World");
      }
