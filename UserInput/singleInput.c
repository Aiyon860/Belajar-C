#include <stdio.h>

int belanjaan()
{
    char barang[100];

    printf("! SELAMAT DATANG DI AIYON MART !\nSILAHKAN PILIH PRODUK YANG ANDA INGINKAN\n");
    printf("Pilih Produk: ");
    scanf("%s", barang);

    printf("\nSelamat! Anda berhasil membeli %s", barang);
}

void test()
{
    belanjaan();
}

int main()
{
    test();
    return 0;
}