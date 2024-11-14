#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int square = n * n;
    int temp = n;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            printf("not");
            return 0;
        }
        else{
        temp /= 10;
        square /= 10;
        
    }
    }
    printf("automorphic");
    }

   


