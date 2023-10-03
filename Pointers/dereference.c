// deference operator -> to get the value the value of the variable the pointer points to (using *)
#include <stdio.h>
#include <string.h>
#include <math.h>

// so, when using string we don't have to put * as a deference operator and as a memory address of a variable(?)
int login(char inputUsername[100], char inputPassword[6])
{
    char username[100];
    strcpy(username, inputUsername);
    char* ptrUsername = username;

    if (strlen(inputPassword) == 6)
    {
        printf("Username: %s\n", ptrUsername);
        printf("Letak Lokasi Username: %p\n\n", ptrUsername);
    }
    else 
    {
        printf("Password tidak dimengerti, mohon mengulang kembali\n");
    }
    return 0;
}

void testLogin()
{
    login("Daniel Aiyon", "123456");
    login("Daniel Aiyon", "1234567");
}

int maths(float first, float second)
{
    float* ptrFirst = &first;
    float* ptrSecond = &second;

    float powerOf = pow(*ptrFirst, *ptrSecond);
    printf("%0.2f\n", powerOf);
    printf("%0.2f\n", sqrt(powerOf));
    printf("%0.2f\n", ceil(powerOf));
    printf("%0.2f\n\n", floor(powerOf));

    return 0;
}

void testMaths()
{
    maths(4, 3);
    maths(5, 3);
    maths(6, 3);
}

void test()
{
    testLogin();
    printf("========================================\n");
    testMaths();
}

int main()
{
    test();
    return 0;
}