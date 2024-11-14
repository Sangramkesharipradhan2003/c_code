#include <stdio.h>

int main() {
    int a[100];
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Even array: [");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d", a[i]);
            if (i < n - 1) {
                printf(", ");
            }
        }
    }
    printf("]\n");

    printf("Odd array: [");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d", a[i]);
            if (i < n - 1) {
                printf(", ");
            }
        }
    }
    printf("]\n");

    return 0;
}

