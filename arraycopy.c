#include<stdio.h>
int main(){
	int a[100],i,n,sum,j,b[100];
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	printf("the elements stored in the first array are :");
	for(i=0;i<n;i++){
	    b[i]=a[i];
	}
	for(i=0;i<n;i++){
	printf("%d",a[i]);
	}
	printf("\nThe elements copied into the second array are:");
	for(i=0;i<n;i++){
	    printf("%d",b[i]);
	}
    return 0;
}
