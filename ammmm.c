#include<stdio.h>
int main()
{
	int amount,r,r1,r2,r3,r4,r5,r6,r7;
	printf("enter the amount");
	scanf("%d",&amount);
	if(amount>=500)
{
	r=amount/500;
    amount=amount%500;
}
amount=amount%500;
if(amount>=100)
{
	r1=amount/100;	
}
amount=amount%100;
if(amount>=50)
{
	r2=amount/50;	
}
amount=amount%50;
if(amount>=20)
{
	r3=amount/20;	
}
amount=amount%20;
if(amount>=10)
{
	r4=amount/10;	
}
amount=amount%10;
if(amount>=5)
{
	r5=amount/5;	
}
amount=amount%5;
if(amount>=2)
{
	r6=amount/2;	
}
amount=amount%2;
if(amount>=1)
{
	r7=amount/1;
}
printf("500 coin: %d\n",r);
printf("100 coin :%d\n",r1);
printf("50 coin :%d\n",r2);
printf("20 coin : %d\n",r3);
printf(" 10 coin :%d\n",r4);
printf("5 coin : %d\n",r5);
printf("2 coin :%d\n",r6);
printf("1 coin :%d\n",r7);
}
