#include <stdio.h>

// special character
int sentences(){
    printf("1.\t\"Ditinggal sepasang kekasih, sekian dan terimakasih\"\n");

    printf("2.\tThat\'s Alden\'s Car\n");

    printf("3.\tThis character \\ is backslash character\n");

    printf("4.\tWhat is this \0 character mean?\n"); // doesn't appear

    return 0;
}

void test() {
    sentences();
}

int main() {
    test();
    return 0;
}