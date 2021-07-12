//EXERCÍCIO_2
#include <16f628a.h>
#use delay (clock=1000000)
#fuses INTRC_IO,NOWDT,PUT,NOLVP,BROWNOUT,NOMCLR

main(){
       while(true){
                   if(!input(pin_a0)){output_B(0xFF);}
                   if(!input(pin_a1)){output_B(0x00);}
                   if(!input(pin_a2)){output_high(PIN_B7);
                                      delay_ms(500);
                                      output_low(PIN_B7);
                                      delay_ms(500);}
                  }                   
      }                                
                   


