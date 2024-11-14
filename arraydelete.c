#include <stdio.h>
int main() {
    int a[100],n,b,c,i;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Input the position where to delete:");
    scanf("%d",&c);
    for(i=c;i<n-1;i++){
    	a[i]=a[i+1];
    }
        n--;     
    for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
    return 0;
}
