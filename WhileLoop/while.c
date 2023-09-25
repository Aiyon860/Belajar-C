#include <stdio.h>

int divisionByTwo(int n) {
    int j = n % 2;

    // must in even number  
    if (j == 0 && n != 0) {
        int number = n;

        while (number >= 2) {
            number /= 2;
            printf("Current: %i\n", number);
            if (number == 1) {
                printf("Program is Done! Result: %i\n", number);
            } else if (number % 2 == 1) {
                number -= 1;
                if (number == 2) {
                    number /= 2;
                    printf("Current: %i\n", number);
                    printf("Program is Done! Result: %i\n", number);
                } else if (number == 3) {
                    printf("Current: %i\n", number);
                    number -= 1;
                } else {
                    number /= 2;
                    printf("Current: %i\n", number);
                    if (number == 7) {
                        number -= 1;
                    }
                }
            }
        }
    } else {
        if (j == 1) {
            printf("Odd number! Try again please!\n");
        } else if (n == 0) {
            printf("Cannot number zero! Try again please!\n");
        }
    }
    return 0;
}

void test() {
    divisionByTwo(5);
    divisionByTwo(0);
    divisionByTwo(18);
    divisionByTwo(30);
    divisionByTwo(100);
}

int main() {
    test();
    return 0;
}