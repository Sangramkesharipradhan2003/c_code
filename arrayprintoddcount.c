#include <stdio.h>
int main() {
   int a[100],n,i,j,b[100]={0},c;
   printf("enter the array size ");
   scanf("%d",&n);
   printf("enter the %d array elements",n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(b[i]!=-1)
          {
       for(j=i+1,c=1;j<n;j++){
           if(a[i]==a[j]){
               c++;
               b[j]=-1;
           }
       }
       b[i]=c;
          }
   }
    printf("The elements occurring odd number of times are: ");
for(i = 0; i < n; i++) {
        if(b[i] != -1 && b[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
