//EXERCÍCIO_3
#include <16f628a.h>
#use delay (clock=1000000)
#fuses INTRC_IO,NOWDT,PUT,NOLVP,BROWNOUT,NOMCLR

int x[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
int i;

main(){ 
       while(true){
                   for(i=0;i<8;i++){output_B(x[i]);
                                    delay_ms(500);}
                  }                   
      }                                
                   

