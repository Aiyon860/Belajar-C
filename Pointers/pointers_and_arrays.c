#include <stdio.h>
#include <string.h>

int multipleOfFive()
{
    char numbers[5] = {5, 10, 15, 20, 25};
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    // in actual numbers format
    for (int i = 0; i < numbersSize; i++)
    {
        printf("%d\n", numbers[i]);
    }

    printf("\n");

    // in memory address format
    for (int i = 0; i < numbersSize; i++)
    {
        printf("%p\n", numbers[i]);
    }

    printf("\n");
}

void testMultipleOfFive()
{
    multipleOfFive();
}

int ukuran()
{
    // size of the each array element and an array itself
    int example1;
    int example2[3] = {10, 20, 30};
    float example3;
    double example4;
    char example5;
    char example6[4] = {1, 2, 3, 4};

    printf("Int: %lu\nArray Ints: %lu\nFloat: %lu\nDouble: %lu\nChar: %lu\nString: %lu\n", 
            sizeof(example1), sizeof(example2), sizeof(example3), sizeof(example4), sizeof(example5), sizeof(example6));
    printf("\n");
    
    return 0;
}

void testUkuran()
{
    ukuran();
}

int pointersWithArray()
{
    // example 1
    char antrian[5][10] = {"Daniel", "Tirza", "Elfron", "Naya", "Ella"};
    printf("%p\n", antrian);        // same result
    printf("%p\n", antrian[0]);     // same result

    printf("%s\n", *antrian);
    printf("%s\n", *(antrian + 1));
    printf("%s\n", *(antrian + 2));
    printf("%s\n", *(antrian + 3));
    printf("%s\n\n", *(antrian + 4));

    // example 2
    int angka[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(angka + i));
    }
    printf("\n");

    // example3 + change the value of array through pointers
    int kelipatanDuaPuluh[5] = {20, 40, 60, 80, 100};
    int *ptrKelipatan = kelipatanDuaPuluh;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptrKelipatan + i));
    }
    printf("\n");
    
    // change value
    *ptrKelipatan -= 20;
    *(ptrKelipatan + 1) -= 20; 
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptrKelipatan + i));
    }

    return 0;
}

void testPointersWithArray()
{
    pointersWithArray();
}

void test()
{
    testMultipleOfFive();
    testUkuran();
    testPointersWithArray();
}

int main()
{
    test();
    return 0;
}