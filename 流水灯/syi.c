 #include<reg52.h>
 void delay1ms(unsigned int i)
 {
 unsigned char j;
 while(i--)
 for(j=0;j<125;j++);
 }
 void main()
 {
 while(1)
 {
 P1=0xfe;
 delay1ms(2000);
 P1=0xfd;
 delay1ms(2000);
 P1=0xfb;
 delay1ms(2000);
 P1=0xf7;
 delay1ms(2000);
 P1=0xef;
 delay1ms(2000);
 P1=0xdf;
 delay1ms(2000);
 P1=0xbf;
 delay1ms(2000);
 P1=0x7f;
 delay1ms(2000);
 }
 }