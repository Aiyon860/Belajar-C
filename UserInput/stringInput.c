#include <stdio.h>

int profile()
{
    char nama[100];

    printf("Masukkan nama anda: ");
    scanf("%s", nama);

    printf("\nSelamat! %s Anda terima di pekerjaan\n", nama);

    return 0;
}

// using fgets() function -> read a line of text
int profileWithSpace()
{
    char nama[100];

    printf("Masukkan nama anda: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Selamat! Anda terima di pekerjaan Bapak %s", nama);

    return 0;
}

void test()
{
    profileWithSpace();
}

int main()
{
    test();
    return 0;
}