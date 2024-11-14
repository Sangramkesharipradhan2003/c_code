#include<stdio.h>
int main() {
    int a[10][10],b[10][10],mul[10][10] ,n, nc, r, c;

    printf("Enter the array size ");
    scanf("%d",&n);
    printf("Enter %d elements of a:\n", n);
    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &a[r][c]);
        }
    }
     printf("\nThe a matrix is:\n", n);
    for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }
    printf("Enter %d elements of b:\n", n);
     for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &b[r][c]);
        }
    }
  printf("\nThe b matrix is:\n", n);
    for (r = 0; r < n; r++) {
    for (c = 0; c < n; c++) {
            printf("%6d", b[r][c]);  
        }
        printf("\n");  
    }
   for (r = 0; r < n; r++) {
        for (c = 0; c < n; c++) {
          mul[r][c]=a[r][c]*b[r][c];
        }
    }
  printf("\nThe mul matrix is:\n", n);
    for (r = 0; r < n; r++) {
    for (c = 0; c < n; c++) {
            printf("%6d", mul[r][c]);  
        }
        printf("\n");  
    }
    return 0;
}
