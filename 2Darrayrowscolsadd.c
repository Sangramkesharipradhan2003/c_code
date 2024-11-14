#include<stdio.h>
int main(){
	int a[10][10],r,c,n,sum1=0,sum2=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++){
			scanf("%d",&a[r][c]);
		}
	}
	printf("the matrix is:\n");
		for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++){
			printf("%6d",a[r][c]);
		}
		printf("\n");
	}
printf("the sum of rows and cols is :\n");
for(r=0;r<n;r++)
	{
		int csum=0;
		for(c=0;c<n;c++){
			csum+=a[r][c];
			printf("%3d",a[r][c]);
		}
		printf("%3d" , csum);
		printf("\n");
	}
	for(r=0;r<n;r++)
	{
	 int rsum=0;
		for(c=0;c<n;c++)
			{
				rsum+=a[c][r];			
			}
	   	printf("%3d",rsum);
	}
	
	return 0;
}
