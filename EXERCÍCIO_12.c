//EXERCÍCIO_12
#include <16f628a.h>
#use delay (clock=1000000)
#fuses INTRC_IO,NOWDT,PUT,NOLVP,BROWNOUT,NOMCLR



main(){while(1){
                int x=0;
                while(x<13){int y=0;
                            if(!input(PIN_B0)){
                                               while(y<x){output_high(PIN_B4);
                                                          delay_ms(500);
                                                          output_low(PIN_B4);
                                                          delay_ms(500);
                                                          y++;
                                                         }
                                               x++;
                                              }
                           } 
              }
      }        
