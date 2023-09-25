// make the '1, 3, 5 etc' / odd index data gone when the array get printed out
// array index starts from 0 (in C)
int antrian() {
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int length = (sizeof(numbers) / sizeof(numbers[0]));

    for (int i = 0; i < length; ++i) {
        if (i % 2 == 1) {
            continue;
        }
        printf("%i\n", numbers[i]);
    }  
    return 0;
}

void test() {
    antrian();
}

int main() {
    test();
    return 0;
}