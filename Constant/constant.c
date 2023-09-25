#include <stdio.h>

int order(int angka) {
    const int BAYAR = angka;

    printf("%i", BAYAR);

    return 0;
}   

int main() {
    order(10000);

    return 0;
}