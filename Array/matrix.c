#include <stdio.h>
#define length 3

int matrix() {
    int numbers[length][length] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (numbers[i][j] % 2 == 0) {
                numbers[i][j] = 0;
            }
            printf("%i ", numbers[i][j]);
            if (j == 2) {
                printf("\n");
            }      
        }
    }
}

void test() {
    matrix();
}

int main() {
    test();
    return 0;
}