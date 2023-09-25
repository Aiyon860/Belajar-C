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

// main function
int main() {
    hello("Daniel Adi Pratama", "Ganteng dan Intelek");

    return 0;
}

