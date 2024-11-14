#include<stdio.h>
int main(){
	int a[100],i,n,sum;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of all elements stored in the array is :%d",sum);

    return 0;
}
