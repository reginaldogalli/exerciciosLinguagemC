//EXERCÍCIO_8
#include <16f628a.h>
#use delay (clock=1000000)
#fuses INTRC_IO,NOWDT,PUT,NOLVP,BROWNOUT,NOMCLR

main(){
       while(true){
                   output_high(PIN_B0);
                   delay_ms(500);
                   output_low(PIN_B0);
                   delay_ms(500);
                  }
      }            
