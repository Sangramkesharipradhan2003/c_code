#include <stdio.h>
int main() {
   int a[100],i,n;
   printf("enter the array size");
   scanf("%d",&n);
   printf("Enter %d elements",n);
   for(i=0;i<n;i++){  scanf("%d",&a[i]); }
   for(i=0;i<n-1;i++){
   for(int j = i+1;j<n;j++){
       if(a[i]>a[j]){
      int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       }
   }
   }
   for(i=0;i<n;i++)printf("%4d",a[i]);
    return 0;
}
