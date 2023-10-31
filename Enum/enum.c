#include <stdio.h>
#include <ctype.h>

enum Level {
    LOW,
    MEDIUM, 
    HARD, 
    EXPERT
};

enum Position {
    PRESIDENT = 100,
    VICEPRESIDENT = 75,
    MANAGER = 50,
    EMPLOYEE = 25
};

enum sequence {
    FIRST = 1,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
};

enum Class {
    TI1A = 'A',
    TI1B = 'B',
    TI1C = 'C'
};

void exercise();
void unicorn();
void increment();
void csStudent();

int main()
{
    exercise();

    printf("\n");

    unicorn();

    printf("\n");

    increment();

    printf("\n");

    csStudent();

    return 0;
}

void exercise()
{
    enum Level gameDifficulty;
    gameDifficulty = EXPERT;
    printf("Level: %d\n", gameDifficulty);  // print 3, default value when we not assign value to enum item

    enum Level mathDifficulty = LOW;
    printf("Level: %d\n", mathDifficulty);  // print 0, default value when we not assign value to enum item
}

void unicorn()
{
    enum Position office = PRESIDENT;
    printf("Position: %d\n", office);
}

void increment()
{
    enum sequence number1 = FIRST;
    printf("Angka: %d\n", number1);
    enum sequence number2 = SECOND;
    printf("Angka: %d\n", number2);
    enum sequence number3 = THIRD;
    printf("Angka: %d\n", number3);
    enum sequence number4 = FOURTH;
    printf("Angka: %d\n", number4);
    enum sequence number5 = FIFTH;
    printf("Angka: %d\n", number5);
}

void csStudent()
{
    char name[20];
    char class;
    enum Class kelasA = TI1A;
    enum Class kelasB = TI1B;
    enum Class kelasC = TI1C;

    printf("Enter your name: ");
    gets(name);
    printf("Choose your right class (A, B, C): ");
    scanf("%c", &class);

    switch (toupper(class)) {
    case 'A':
        printf("Anda berada di kelas %c\n", kelasA);
        break;
    case 'B':
        printf("Anda berada di kelas %c\n", kelasB);
        break;
    case 'C':
        printf("Anda berada di kelas %c\n", kelasC);
        break;
    default:
        printf("Kelas tidak ditemukan! Silahkan coba ulang kembali!\n");
        break;
    }   
}