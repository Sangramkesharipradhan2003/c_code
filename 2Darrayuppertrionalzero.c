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
			printf("%3d",a[r][c]);
		}
		printf("\n");
	}
	printf("the upper triangular matrix is zero:\n");
 for(r = 0; r < n; r++) {
        for(c = 0; c < n; c++) {
            if(r<c) {
                printf("  0 "); 
            } else {
                printf("%3d ", a[r][c]);
            }
        }
        printf("\n");  
    }
    return 0;
}
