#include <stdio.h>

void findOddOccurrences(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {8, 3, 8, 5, 4, 3, 4, 3, 5, 1}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The elements occurring odd number of times are: ");
    findOddOccurrences(arr, size); 

    return 0;
}

