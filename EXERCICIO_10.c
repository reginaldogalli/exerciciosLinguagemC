//EXERCÍCIO_10
#include <16f628a.h>
#use delay (clock=1000000)
#fuses INTRC_IO,NOWDT,PUT,NOLVP,BROWNOUT,NOMCLR

main(){while(true){int x=0;
                   int y=0;
                   if(!input(PIN_A1)){while(x<12){output_high(PIN_B5);
                                                 delay_ms(250);
                                                 output_low(PIN_B5);
                                                 delay_ms(250);
                                                 x++;}
                                     }
                   if(!input(PIN_A2)){while(y<300){output_high(PIN_B7);
                                                            delay_ms(125);
                                                            output_low(PIN_B7);
                                                            delay_ms(125);
                                                            y++;}
                                              }  
                  }
      }           
