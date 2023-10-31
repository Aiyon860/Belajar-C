#include <stdio.h>

// predefined function -> to execute the code
float squarePlusOne(int base, int n);

int main()
{
    int base, n;
    printf("-----// SELAMAT DATANG DI PROGRAM MATEMATIKA DASAR //-----\n");
    printf("Masukkan angka pertama: ");
    scanf("%d", &base);
    printf("Masukkan angka kedua: ");
    scanf("%d", &n);

    printf("\n-------------------------------------\n");

    printf("Hasil dari %0.1f^%0.1f adalah %g", 
           (float) base, (float) n, squarePlusOne(base, n));

    return 0;
}

float squarePlusOne(int base, int n)
{
    if (n > 0)
        return (float) base * (squarePlusOne(base + 1, n - 1));
    else
        return 1;
}
