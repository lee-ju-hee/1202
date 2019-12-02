#include <stdio.h>
int main()
{
	char ch, *pc;   //포인터 변수는 주소를 담는 변수입니다. 
	short sh, *ps;   //포인터 변수에 +혹은 -연산은 
	int i, *pi;     //포인터 변수의 데이터 타입의 크기만큼 증감합니다. 
	long l, *pl;    //sizeof(data type)만큼 중감합니다. 
	float f, *pf;
	double d, *pd;
	
	pc=&ch;
	ps=&sh;
	pi=&i;
	pl=&l;
	pf=&f;
	pd=&d;
	
	printf("문자형: %u %u\n", pc, pc+1);
	printf("short형: %u %u\n", ps, ps+1);
	printf("정수형: %u %u\n", pi, pi+1);
	printf("long형: %u %u\n", pl, pl+1);
	printf("float형: %u %u\n", pf, pf+1);
	printf("double형: %u %u\n", pd, pd+1);
	
	return 0;
}
