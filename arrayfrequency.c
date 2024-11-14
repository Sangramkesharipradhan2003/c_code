#include <stdio.h>
int main() {
    int a[100],b[100],i, n, j, c,f;
    printf("Enter the both array size: ");
    scanf("%d", &n);
    printf("Enter %d array1 elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(b[i]!=-1){
            c=1;
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                c++;
                b[j]=-1;
            }
        }
        b[i]=c;
        }
    }
    for(i=0;i<n;i++) if(b[i]!=-1) printf("%d frequency is :%d\n",a[i],b[i]);
    }
