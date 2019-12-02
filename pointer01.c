#include <stdio.h>
int main()
{
	int a=3, b=5;
	int *pi;
	
	pi=&a;  //*pi ≌a
	
	printf("a=%d, b=%d\n", a, b);
	printf("a狼 林家 = %u\n", &a);
	printf("pi狼 蔼 = %u\n", pi);
	printf("pi狼 林家= %u\n", &pi);
	
	*pi=6;	
	printf("a=%d, b=%d, *pi=%d\n", a, b, *pi);
	
	a=7;
	printf("a=%d, b=%d, *pi=%d\n", a, b, *pi); 
	return 0;
}
