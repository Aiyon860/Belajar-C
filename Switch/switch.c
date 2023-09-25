#include <stdio.h>
#include <string.h>

int sauceSteak(char nameSauce) {
    char status[] = "No sauce\n";

    switch (nameSauce) {
        case 'p':
            strcpy(status, "Peppercorn\n");
            puts(status);
            break;
        case 'm':
            strcpy(status, "Mustard Cream\n");
            puts(status);
            break;
        case 'g':
            strcpy(status, "Garlic Mushroom\n");
            puts(status);
            break;
        case 'c':
            strcpy(status, "Coconut Curry\n");
            puts(status);
            break;
        case 's':
            strcpy(status, "Soy Butter\n");
            puts(status);
            break;
        case 'b':
            strcpy(status, "Black Bean\n"); // cannot "Black Bean and Sesame" (> 20 characters)
            puts(status);
            break;
        default:
            printf("%s\n", status);
    }
    return 0;
}

void testSauceSteak() {
    sauceSteak('z');
    sauceSteak('p');
    sauceSteak('m');
    sauceSteak('g');
    sauceSteak('c');
    sauceSteak('s');
    sauceSteak('b');

}

int main() {
    testSauceSteak();
    return 0;
}