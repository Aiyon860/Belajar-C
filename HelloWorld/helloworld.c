#include <stdio.h>

/*
    this is hello function with nama[] and quote[] parameter
*/
int hello(char nama[], char quote[]) {
    printf("My name is\t: %s\n", nama);
    printf("Pronounce\t: He/Him\n");
    printf("Quote\t\t: %s\n", quote);

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

// main function
int main() {
    hello("Daniel Adi Pratama", "Ganteng dan Intelek");
    printf("%d\n", sum(5, 5));
    return 0;
}

