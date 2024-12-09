// WAP to count prime numbers in an array.
#include <stdio.h>
#include <math.h>

int main() {
    int number[50], n, i, j, prime = 0;

    printf("Number of elements in array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; i++) 
    {
        int num = number[i];
        if (num <= 1) {
            printf("%d is not prime\n", num);
            continue;
        }

        int isPrime = 1;
        for (j = 2; j <= sqrt(num); j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d is prime\n", num);
            prime++;
        } else {
            printf("%d is composite\n", num);
        }
    }
          printf("%d Prime numbers",prime);
    return 0;
}