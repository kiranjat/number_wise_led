#include<avr/io.h>
#include<util/delay.h>
int main()
{
   DDRC =255;
   while(1)
   {
   for(int i=0;i<256;i++)
   {
   PORTC =i;
   _delay_ms(1000);
   }
   }
}
