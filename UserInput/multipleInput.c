#include <stdio.h>

int identity()
{
    char name[100];
    int age;

    printf("! SELAMAT DATANG DI WEB SAYA !\nSILAHKAN UNTUK MENGISI FORMULIR IDENTITAS TERLEBIH DAHULU\n");
    printf("Silahkan masukkan nama dan umur anda:\n");
    scanf("%s %i", name, &age);

    printf("\n");

    printf("Hasil Data:\nNama: %s\nUmur: %i", name, age);

    return 0;
}

void test()
{
    identity();
}

int main()
{
    test();
    return 0;
}
