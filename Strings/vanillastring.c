#include <stdio.h>

// common string
int printString() {
    char word[] = {'d', 'a', 'n', 'i', 'e', 'l', '\0'};
    char word2[] = {"daniel"};
    int arrSize = sizeof(word2) / sizeof(word2[0]);     // byte format

    // print same output
    printf("%s\n", word);
    printf("%s\n", word2);

    // change value in one of the array index
    word2[1] = 'i';
    printf("%s\n", word2);
    printf("%c\n", word2[1]);

    // print the array size (turns out same, 7 character long)
    printf("%lu\n", sizeof(word));
    printf("%lu\n", sizeof(word2));

    // loop through a strng
    for (int i = 0; i < arrSize; ++i) {
        printf("[i] = \'%c\'\n", word2[i]);
    }
}

void test() {
    printString();
}

int main() {
    test();
    return 0;
}