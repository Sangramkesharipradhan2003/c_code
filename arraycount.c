#include <stdio.h>
int main() {
  int a[100],c1=0,c2=0,c3=0;
  int n,i;
  printf("enter the array size");
  scanf("%d",&n);
  printf("enter %d elements",n);
  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      if(a[i]==0){
          c1++;
      }
      else if(a[i]%2!=0){
          c2++;
      }
      else c3++;
 }
  printf("zero:%d,odd:%d,even:%d",c1,c2,c3);
  return 0;
 }
