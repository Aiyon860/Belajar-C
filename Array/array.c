#include <stdio.h>
#define length 5

int plusTwentyFive() {
    int numbers[length];

    numbers[0] = 25;
    numbers[1] = 50;
    numbers[2] = 75;
    numbers[3] = 100;
    numbers[4] = 125;

    for (int i = 0; i < length; i++) {
        if (numbers[i] % 2 == 1) {
            numbers[i] *= 10;
        }
        
        printf("%i\n", numbers[i]);
    }
    
    return 0;
}

void test() {
    plusTwentyFive();
}

int main() {
    test();
    return 0;
}
