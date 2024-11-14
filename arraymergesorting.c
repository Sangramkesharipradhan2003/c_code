#include <stdio.h>
int main() {
    int a[100],b[100],i, n1,n2, j, c1 = 0,c2 =0,f;
    printf("Enter the both array size: ");
    scanf("%d%d", &n1,&n2);
    printf("Enter %d array1 elements:\n", n1);
    for (i = 0; i < n1; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter %d array2 elements:\n", n2);
    for (i = 0; i < n2; i++) {
        printf("element - %d : ", i);
        scanf("%d", &b[i]);
    }
    for(i=n1,j=0;j<n1+n2;i++,j++){a[i]=b[j];}
   for(i=0;i<n1+n2;i++)
   {
       for(j=i+1;j<n1+n2;j++){
           if(a[i]<a[j]){
              int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   printf("merge sorting array:");
   for(i=0;i<n1+n2;i++)
    printf("%d\t",a[i]);
    return 0;
}
