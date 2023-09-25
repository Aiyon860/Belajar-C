#include <stdio.h>

// detect prime number in range 10-20, n is <= 20;
int primeNumber() {
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1) {
        flag = 1;
    }

    for (i = 2; i <= n / 2; ++i) {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0) {
        flag = 1;
        break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}

int division() {
    int i = 3, j = 4;
    printf("%i\n", i / j); // 0
}

void test() {
    primeNumber();
    division();
}


int main() {
    test();
    return 0;
}