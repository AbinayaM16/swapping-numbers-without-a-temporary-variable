#include<stdio.h>
main()
{
	int a=10,b=13;
	printf("before swapping a=%d,b=%d",a,b);
	a+=b;
	b=a-b;
	a-=b;
	printf("\n after swapping a=%d,b=%d",a,b);
	return 0;
	
}
