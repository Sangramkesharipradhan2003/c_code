#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	(a>b)&&printf("a is max = %d")||(b>a)&&printf("b is max=%d");
}
