#include <stdio.h>
int main() {
    int a[100],n,b,c,i,j;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
printf("enter the pos where to rotate");
scanf("%d",&b);
for(i=b;i<n;i++){
	printf("%d  ",a[i]);
}
for(i=0;i<b;i++){
	printf("%d  ",a[i]);
	}

return 0;
}
