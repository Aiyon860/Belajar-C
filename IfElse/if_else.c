#include <stdio.h>
#include <stdbool.h>

int month(int n) {
    int input = n;
    int monthAmount = 12;
    bool status = true;

    if (input != 0) {
        if (input <= monthAmount && !(input > monthAmount)) {
            if (input <= (monthAmount / 2) && !(input > (monthAmount / 2))) {
                printf("Correct input: %d;\n", status);
                printf("1st Semester\n");
            } else if(!(input <= (monthAmount / 2)) && (input > (monthAmount / 2))) {
                printf("Correct input: %d;\n", status);
                printf("2nd Semester\n");
            }
        } else {
            status = false;
            printf("Wrong input, exceed max, message error: %d\n", status);
        }
    } else {
        status = false;
        printf("Wrong input, cannot zero, message error: %d\n", status);
    }
}

void testMonth() {
    month(0);
    month(6);
    month(12);
    month(15);
}

int number(int n) {
    if (n != 0) {
        (n > 24) ? printf("Next Day\n") : printf("Today\n");
    } else {
        printf("Error: NullPointerException!\n");
    }
} 

void testNumber() {
    number(0);
    number(24); 
    number(100); 
}

void test() {
    testMonth();
    testNumber();
}

int main() {
    test();

    return 0;
}