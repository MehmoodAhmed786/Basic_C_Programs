#include<stdio.h>
int main()
{
	unsigned char r1,r2,b1,b2,g1,g2;
	r1=0xFF;
	r2=0x00;
	b1=0x00;
	b2=0xFF;
	g1=0x00;
	g2=0x00;
	
	int unsigned r3,r4,b3,b4,g3,g4;
	r3=r1<<16;
	b3=b1<<0;
	g3=g1<<8;
	r4=r2<<16;
	b4=b2<<0;
	g4=g2<<8;
	
	unsigned int m=(r3 | b3 | g3 ) | (r4 | b4 | g4);
	printf("%x",m);
	
	return 0;
}
