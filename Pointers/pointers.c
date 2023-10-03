/* pointer using %p format specifier */
#include <stdio.h>

int exampleOne(int umur)
{
    int peopleAge;
    if (umur < 100 && umur > 0)
    {
        peopleAge = umur;
        printf("%d\n", peopleAge);
        printf("&d\n", peopleAge);
    }
    return 0;
}

void testExampleOne()
{
    exampleOne(0);
    exampleOne(18);
    exampleOne(100);
}

int exampleTwo()
{
    char buah[25] = "Mangga";
    char* ptr = buah;

    // print the data of buah
    printf("Nama Buah: %s\n", buah);
    // print the pointer variable value
    printf("Lokasi Buah %s adalah %p\n", buah, ptr);
    // print the memory address value of 'buah' 
    printf("Lokasi Asli Buah %s adalah %p\n", buah, buah);
}

void testExampleTwo()
{
    exampleTwo();
}

int exampleThree(int input)
{
    int harga = input;
    int* ptrHarga = &harga;
    if (harga == 0)
    {
        printf("Penentuan harga salah!\n\n");
    }
    else
    {
        printf("Harga barang adalah: %d\n", harga);
        printf("Alamat barang adalah: %p\n", ptrHarga);
    }
}

void testExampleThree()
{
    exampleThree(0);
    exampleThree(10000);
}

void test()
{
    testExampleThree();
}

int main()
{
    test();
    return 0;
}