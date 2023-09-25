#include <stdio.h>
#include <stdlib.h>
// #define length 6        // this is constant.

// everytime the kid have grade <70 in their student semester report then the kid got scolded.
// so, this program only giving output grade from >70 only.
int belowHundred(int grade) {
    if (grade > 100) {
        printf("Wrong Number of Grade Input, Cannot more than 100\n");
        exit(1);
    }
    return 0;
}

int twoOrMoreInput(int n) {
    if (n <= 2) {
        printf("Need more Number of Grade Input\n");
        exit(1);
    }
    return 0;
}

int checkRequirement(int n) {
    if (n == 0 || n <= 2) {
        printf("Good job, So average! Amount of failed exam: %i\n", n);
    } else {
        printf("You're a Failure! Amount of failed exam: %i\n", n);
    }
    return 0;
}

int studentReport() {
    printf("THIS IS STUDENT REPORT REVIEW\nPass Requirement is Grade >= 70\n\n");

    int length;
    printf("Amount of Exam you did: ");
    scanf("%i", &length);
    twoOrMoreInput(length);         // check if the grade input is more than 2

    int Grade[length];              // to store the data we input

    printf("\nType the exam grade you have got so far:\n");

    // input grade(s)
    for (int i = 1; i < length; i++) {
        printf("Grade[%i] = ", i);
        scanf("%i", &Grade[i]);
        belowHundred(Grade[i]);     // check if the grade value input is >100 or not
    }

    printf("\nGrade Output\n");

    // output all grades
    for (int i = 1; i < length; i++) {
        printf("Grade[%i] = %i\n", i, Grade[i]);
    }
    
    int j = 0;                      // indicating how many exam(s) failed

    // filtering the grade(s)
    for (int i = 1; i < length; i++) {
        if (Grade[i] < 70) {
            j += 1;
            continue;
        }
        printf("%i\n", Grade[i]);
    }

    // last judgement for the kid (LOL)
    checkRequirement(j);

    return 0;
}

void test() {
    studentReport();
}

int main() {
    test();
    return 0;
}