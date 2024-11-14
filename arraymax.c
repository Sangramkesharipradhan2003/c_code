#include <stdio.h>
int main() {
   int a[100],i,n;
   printf("enter the array size");
   scanf("%d",&n);
   printf("Enter %d elements",n);
   for(i=0;i<n;i++){  
       scanf("%d",&a[i]); 
   if(a[0]<a[i])
   {
       a[0]=a[i];
   }
   }
   printf("max element:%d",a[0]);
    return 0;
}
