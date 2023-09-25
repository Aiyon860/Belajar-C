#include <stdio.h>

int nestedLoop() {
    // declaring loop variables
    int i = 0, j; // i row, j column
    int count = 0;
 
    // outer loop starts
    do {
        j = 0;
 
        // inner loop starts
        do {
            printf("%d  ", count++); // dari 0 dulu countnya, ga langsung count = 1 
            j++; // dari 0 dulu j nya, ga langsung j = 1
        } while (j < 3);
        // inner loop ends
 
        printf("\n");
        i++;
    } while (i < 3);
    // outer loop ends
 
    return 0;
}

void testNestedLoop() {
    nestedLoop();
}

int aboveTenBelowHundred(int n) {
    int number = n;
    const int multiplier = 2;

    do {
        printf("%i\tx\t2\t:\t%i\n", number, number * multiplier);
        number *= 2;      
    } while (number > 10 && number < 100); 
    
    return 0;
}

void testAboveTenBelowHundred() {
    aboveTenBelowHundred(0); // executed only once
    printf("<---------------------------------------------->\n");
    aboveTenBelowHundred(5); // executed only once
    printf("<---------------------------------------------->\n");
    aboveTenBelowHundred(8); // executed 4 times
    printf("<---------------------------------------------->\n");
    aboveTenBelowHundred(10); // executed 4 times
    printf("<---------------------------------------------->\n");
    aboveTenBelowHundred(20); // executed 3 times
}

void test() {
    testNestedLoop();
    testAboveTenBelowHundred();
}

int main() {
    test();
    return 0;
}
