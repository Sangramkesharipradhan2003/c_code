#include<stdio.h>
int main(){
	int a[10][10],r,c,n,sum=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++){
			scanf("%d",&a[r][c]);
		}
	}
for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++){
			printf("%6d",a[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<n;r++)
	{
		for(c=0;c<=n;c++){
			if(r+c==n-1){
				sum+=a[r][c];
			}
		}
	}
	printf("right digonal sum:%d",sum);
	return 0;
}
