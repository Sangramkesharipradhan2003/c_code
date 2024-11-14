#include<stdio.h>
int main() {
    int a[100][100], nr, nc, r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &nr, &nc);
    printf("Enter %d elements:\n", nr * nc);
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            printf("Element at position [%d][%d]: ", r, c);
            scanf("%d", &a[r][c]);
        }
    }
 printf("\nThe %dx%d matrix is:\n", nr, nc);
    for (r = 0; r < nr; r++) {
        for (c = 0; c < nc; c++) {
            printf("%6d", a[r][c]);  
        }
        printf("\n");  
    }

    return 0;
}

