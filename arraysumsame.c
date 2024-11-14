#include <stdio.h>
int main() {
    int a[100],n,b,c,i,j,sum;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter The given sum : ");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++){
    		if(a[i]+a[j]==sum){
    			printf("(%d,%d)  ",a[i],a[j]);
			}
		}
	}
	return 0;
}
