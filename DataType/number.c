#include <stdio.h>

int tipeData() {
    __int8 matematika = 90;
    __int8 fisika = 83.5;
    __int8 kimia = 80.9;

    __int8 average = (matematika + fisika + kimia) / 3;

    printf("Nilai rata-rata: %i\n", average);

    return 0;
}

int desimal() {
    float tinggiBadan = 175.3;

    printf("%f\n", tinggiBadan);
    printf("%.1f\n", tinggiBadan);
    printf("%.2f\n", tinggiBadan);
    printf("%.3f\n", tinggiBadan);

    return 0;
}

int main() {
    tipeData();

    desimal();

    return 0;
}