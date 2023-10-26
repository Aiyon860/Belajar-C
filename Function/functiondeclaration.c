#include <stdio.h>
#include <stdbool.h>

// predefined function -> to execute the code
bool isPass(float value);

float averageScore(float value1, float value2, float value3);

static float result;

// main function
int main()
{
    averageScore(80.0, 80.0, 80.0);
    printf("%d\n", isPass(result));

    averageScore(0.0, 0.0, 0.0);
    printf("%d\n", isPass(result));

    return 0;
}

bool isPass(float value)
{
    if (value >= 70.0)
        return true;
}

float averageScore(float value1, float value2, float value3)
{
    result = (value1 + value2 + value3) / 3;
}
