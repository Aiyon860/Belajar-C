#include <stdio.h>

// belajar for-loop
int recehan(int initialNumber) {
    int i = initialNumber;

    if (i > 99) {
        for (i; i <= 1000; i += 100) {
            if (i == 100 || i == 200 || i == 500 || i == 1000) {
                printf("<-------------------------------------------->\n");
                printf("Current Recehan\t:\t%i rupiah\n", i);
                printf("<-------------------------------------------->\n");
            } else {
                printf("Current Number\t:\t%i\n", i);
            }
        }
    } else {
        printf("Cannot receive numbers smaller than 100! Try again please!\n");
    }
}

void test() {
    recehan(50);
    recehan(100);
}

int belajar() {
    // int angka = 5;

    // for (int i = 0; i <= angka; i++) {
    //     printf("angka ke-%i\n", i);
    // }

    return 0;
}

int main() {
    // test();
    belajar();
    
    return 0;
}