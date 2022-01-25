/**
 * C program to check Most Significant Bit (MSB) of a number using bitwise operator
 */

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

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    if(check_msb(num))
        printf("MSB of %d is set.", num);
    else
        printf("MSB of %d is not set.", num);

    return 0;
}
