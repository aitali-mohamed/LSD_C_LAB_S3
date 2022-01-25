#include <unistd.h>
#include <stdio.h>
#define BITS sizeof(int) * 8 // Total bits required to represent integer



int check_msb ( int num )
{
    	/* Move first bit of 1 to highest order */
	int msb = 1 << (BITS - 1);
	if(num & msb)
		return 1;
	else 
		return 0;		

}



void	print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;
	i = 8;
	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}
