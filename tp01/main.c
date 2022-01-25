#include "myhead.h"


int main(void)
{
	//bin test
	printf(" :the binary of  the byte 2");	
	print_bits(2);
	
	// msb test
	int num;
	printf("\nMSB test\n");
	printf("Enter any number: ");
	scanf("%d", &num);
	if(check_msb(num))
	printf("MSB of %d is set.", num);
	else
	printf("MSB of %d is not set.", num);
	return 0;
   
}
