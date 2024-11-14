#include<stdio.h>
int main(){
	int a[100],i,n,sum,j;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
		for(i=n-1;i>=0;i--){
		
		printf(":%d",a[i]);
	}
    return 0;
}
