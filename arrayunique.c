#include<stdio.h>

int main() {
    int a[100], i, n, j, uniq, f;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Unique elements are: ");
    for (i = 0; i < n; i++) {
        f = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j] && i != j) {
                f = 1;  
                break;
            }
        }
        if (f == 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

