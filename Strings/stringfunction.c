#include <stdio.h>
#include <string.h>

int names() {
    // difference between sizeof and strlen (string length)
    char name1[] = {"Daniel"};
    printf("%d\n", sizeof(name1));      // 7 (inlcuding \0 character)
    printf("%d\n", strlen(name1));      // 6

    char name2[10] = {"Tirza"};
    printf("%d\n", sizeof(name2));      // return in memory size format (in bytes), not actual string length
    printf("%d\n", strlen(name2));      

    // concatenate strings
    char name3[] = {"Abed"};
    char name4[20] = {"Thea"}; // the size of name4 should be large enough to store the result of the two strings combined
    strcat(name4, name3);
    printf("%s\n", name4);

    // copying strings
    char name5[20] = {"Elfron"}; 
    char name6[20]; // the size of name6 should be large enough to store the copied string
    strcpy(name6, name5);
    printf("%s\n", name6);

    // comparing strings
    char word1[] = {"Hi!"};
    char word2[] = {"Hi!"};
    char word3[] = {"Hello!"};
    
    int result1 = strcmp(word1, word2); // results '0' means that the strings are equal or same
    int result2 = strcmp(word1, word3); // results '1' (or any number beside 0) means that the strings are not equal or same

    printf("%i\n", result1);
    printf("%i\n", result2);

    return 0;
}

int example() {
    char wadahNama[50];
    char wadahSementara[] = {};
    char wadahNama2[50] = {};

    scanf("Masukkan nama pertama: ");
    gets(wadahSementara);

    strcpy(wadahNama, wadahSementara);
    printf("%s\n", wadahNama);

    scanf("Masukkan nama kedua: ");
    gets(wadahNama2);

    strcat(wadahNama2, wadahNama);
    printf("%s\n", wadahNama2);
    printf("Ukuran string menggunakan sizeof(): %d\nUkuran string menggunakan strlen(): %d\n", sizeof(wadahNama2), strlen(wadahNama2));

    printf("Membandingkan isi Array of Char:\n");
    printf("%i\n", strcmp(wadahNama, wadahNama2));

    return 0;
}

void test() {
    names();
    example();
}

int main() {
    test();
    return 0;
}