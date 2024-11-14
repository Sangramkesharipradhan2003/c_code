#include <stdio.h>
int main() {
   int a[100],i,n,ele,f=0;
   printf("enter the array size");
   scanf("%d",&n);
   printf("Enter %d elements",n);
   for(i=0;i<n;i++){  
       scanf("%d",&a[i]); 
   }
   printf("enter the elemnt for search");
   scanf("%d",&ele);
   for(i=0;i<n;i++){
       if(ele==a[i]){ 
        printf("element found %d index ",i);
        f=1;   
        break;
   }
   }
if(f==0)printf("Not found");
   return 0;
}
