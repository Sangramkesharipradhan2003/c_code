#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],n,*p=&a[0],i;
	printf("enter the array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("element - %d : ",i);
	scanf("%d",&p[i]);
	}
	int s,j,f=0;
	printf("Input the element for search : ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{		
		if(s == p[i])
			{
				printf("%d present in the array in %d index  ",s,i);
				f=1;
				break;
			}
		}
		if(f==0)printf("%d does not exists in array ",s);
	}
