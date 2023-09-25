#include <stdio.h>

int division(__int8 value1, __int8 value2) {
    float result = (float) value1 / value2;

    if (value1 >= value2) {
        printf("Result: %.2f\n", result);    
    } else {
        printf("Maaf, anda salah input\n");
    }
    return 0;
}

int average(int value1, int value2, int value3, int value4) {
    int arr[] = {value1, value2, value3, value4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int totalValue = 0;
    
    for (int i = 0; i < arrSize; i++) {
        totalValue += arr[i];
    }

    double average = (double) totalValue / arrSize;
    printf("Result: %.2lf\n", average);
    
    return 0;
}

int main() {
    division(25, 2); // correct input
    division(2, 10); // "Maaf, anda salah input"

    average(5, 3, 7, 10); // 6.25
    average(10, 30, 100, 20); // 40.00

    return 0; // to stop the operation of the code
}




