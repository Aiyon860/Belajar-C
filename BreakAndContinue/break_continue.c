#include <stdio.h>
#define LENGTH 20

int evenNumbers() {
    // stop the operation at number 80
    int numbers[LENGTH] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};

    int odd = 0;        // how many odd number in array
    int even = 0;       // how many even number in array

    printf("LIST OF EVEN NUMBERS:\n");

    for (int i = 0; i < LENGTH; i++) {
        if (numbers[i] % 2 == 1) {
            odd++;
            continue;
        } 

        if (numbers[i] == 80) {
            printf("\nOperation is Stopped!\n");
            break;
        }

        printf("%i\n", numbers[i]);
        even++;
    }

    printf("Even Numbers in Total: [%i]\n", even);
    printf("Odd Numbers in Total: [%i]", odd);

    return 0;
}

void test() {
    evenNumbers();
}

int main() {
    test();
    return 0;
}