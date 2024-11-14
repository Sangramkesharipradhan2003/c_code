#include <stdio.h>
int main() {
    int a[100],n,b,c,i;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value to be inserted");
    scanf("%d",&b);
    printf("enter the value where be inserted");
    scanf("%d",&c);
    for(i=n;i>c;i--){
    	a[i]=a[i-1];
    }
        a[c]=b;
		n++;      
    for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
    return 0;
}
