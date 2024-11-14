#include<stdio.h>
int main(){
	int a[100],i,n,j,k,sum,c=0;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	 for(k=0;k<n;k++){
	    scanf("%d",&a[k]);
	 }
	for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
	    if(a[i]==a[j]){
	    c++;
	}
	}
	}
	printf("duplicate :%d",c);
    return 0;
}
