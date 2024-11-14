#include<stdio.h>
int main() {
    int a[100][100],nr, nc, r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &nr, &nc);
    printf("Enter %d elements:\n", nr * nc);
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            scanf("%d", &a[r][c]);
        }
    }
    printf("\nThe matrix is:\n", nr, nc);
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }
printf("\nThe Transpose matrix is:\n", nr, nc);
        for (c = 0; c < nc; c++) {
    for (r = 0; r < nr; r++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }
    return 0;
}

