#include <stdio.h>
#define LENGTH1 2
#define LENGTH2 3
#define LENGTH3 3

int threeDimensional() {
    int numbersAndChars[LENGTH1][LENGTH2][LENGTH3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}};

    for (int i = 0; i < LENGTH1; i++) {
      for (int j = 0; j < LENGTH2; j++) {
        for (int k = 0; k < LENGTH3; k++) {
            printf("%i ", numbersAndChars[i][j][k]);
            if (j == 2 && k == 2) {
                printf("\n");
            }
        }
      }
    } 
}

void test() {
    threeDimensional();
}

int main() {
    test();
    return 0;
}