#include <stdio.h>
#include <stdbool.h>

// saving
int saving(int moneyAmount) {
    int salary = 0; 

    // pemasukan
    salary += moneyAmount;

    // pengeluaran
    int rice = 7500;
    int vegetables = 5000;
    int meat = 10000;

    if (salary != 0) {
        while (salary > 0){
            if (salary >= rice) {
                salary -= rice;
                printf("Berhasil membeli beras!\n");
                printf("Jumlah uang anda sekarang: %i\n", salary);
            } else if (salary >= vegetables) {
                salary -= vegetables;
                printf("Berhasil membeli sayuran!\n");
                printf("Jumlah uang anda sekarang: %i\n", salary);
            } else if (salary >= meat) {
                salary -= meat;
                printf("Berhasil membeli daging!\n");
                printf("Jumlah uang anda sekarang: %i\n", salary);
            } else if (salary <= rice && salary <= vegetables && salary <= meat) {
                printf("Maaf, uang anda tidak mencukupi\n");
            } 
        }
    } else {
        printf("Maaf, sekarang anda bokek.\n");
        printf("Tolong, bekerjalah lebih giat dan lebih hemat dalam menggunakan gaji yang anda dapatkan :D\n");
    }
    return 0;
}

void testSaving() {
    // saving(0);
    // saving(7500);
    // saving(12500);
    // saving(22500);
}

// rumus bangun datar/2d
int square(int length, int width) {
    return length * width;
}

int triangle(int base, int height) {
    return (base * height) / 2;
}

int clock(int jumlahJam) {
    if (jumlahJam >= 24) {
        int day = jumlahJam / 24;
        int hour = jumlahJam % 24;

        printf("Total Waktu: %i hari dan %i jam\n", day, hour);
    } else {
        printf("Maaf, anda salah input\n");
    }
}

void testTwoDimensions() {
    int luasPersegi = square(5, 4);
    printf("Luas persegi tersebut adalah: %i\n", luasPersegi);

    int luasSegitiga = triangle(10, 5);
    printf("Luas segitiga tersebut adalah: %i\n", luasSegitiga);

    clock(5);
    clock(24);
    clock(50);
}

// >= 5
int aboveFive() {
    int n = 5;

    for (int i = (n - 1); i > 0; i--) {n *= i;}
    
    printf("Hasil 5! adalah: %i\n", n);

    return 0;
}

void testAboveFive() {
    aboveFive();
}

// increment and decrement
int incAndDec(int inc, int dec) {
    int resultInc = ++inc;
    int resultDec = --dec;

    printf("Increment: %i; Decrement: %i\n", resultInc, resultDec);
}

int testIncAndDec() {
    incAndDec(10, 10);
}

// ASSIGNMENT OPERATOR trial-and-error
int assignOperator() {
    // tambah
    int a = 10;
    a += 30;
    printf("%i\n", a);

    // kurang
    int b = 25;
    b -= 10;
    printf("%i\n", b);

    // perkalian
    int c = 40;
    c *= 2;
    printf("%i\n", c);

    // pembagian
    int d = 65;
    d /= 5;
    printf("%i\n", d);

    // modulo
    int e = 80;
    e %= 17;
    printf("%i\n", e);

    /* BITWISE OPERATOR */

    // AND "&" -> mainly for memory address of a variable
    int f = 105;
    f &= 25;
    printf("%i\n", f);

    // OR "|""
    int g = 120;
    g |= 45;
    printf("%i\n", g);

    // EXCLUSIVE OR "^" --> this is not "to the power of x"
    int h = 135;
    h ^= 15;
    printf("%i\n", h);

    // SHIFT LEFT, max bits = 32
    int j = 150;
    j <<= 30;
    printf("%i\n", j);

    // SHIFT RIGHT, max bits = 32
    int k = 175;
    k >>= 15;
    printf("%i\n", k);
}

void testAssignOperator() {
    assignOperator();
}

// COMPARISON OPERATOR
int compareOperator(int nilaiUlangan) {
    if (nilaiUlangan == 100) {
        printf("Selamat, Anda mendapat Rangking S\n");
    } else if (nilaiUlangan >= 90) {
        printf("Selamat, Anda mendapat Rangking A\n");
    } else if (nilaiUlangan >= 80) {
        printf("Selamat, Anda mendapat Rangking B\n");
    } else if (nilaiUlangan >= 70) {
        printf("Selamat, Anda mendapat Rangking C\n");
    } else if (nilaiUlangan >= 60) {
        printf("Selamat, Anda mendapat Rangking D\n");
    } else if (nilaiUlangan >= 50) {
        printf("Selamat, Anda mendapat Rangking E\n");
    } else {
        printf("ANDA INI SEBENARNYA SERIUS BELAJAR APA ENGGA SIH???\n");
    } 
}

void testCompareOperator() {
    compareOperator(100);
    compareOperator(90);
    compareOperator(80);
    compareOperator(70);
    compareOperator(60);
    compareOperator(50);
    compareOperator(0);
}

// LOGICAL OPERATOR
int logicOperator(float nilaiUjian, float nilaiTugas, int presensi) {
    bool lulus = !true;
    int minUjian = 70.0, minTugas = 80.0, minPresensi = 10;

    if (nilaiUjian >= minUjian && presensi >= minPresensi) {
        lulus = true;
        if (nilaiUjian == 100.0) {
            printf("Selamat Anda Lulus dengan Rangking S!\n");
        } else if (nilaiUjian >= 90.0) {
            printf("Selamat Anda Lulus dengan Rangking A!\n");
        } else if (nilaiUjian >= 80.0) {
            printf("Selamat Anda Lulus dengan Rangking B!\n");
        } else if (nilaiUjian >= 75.0 || nilaiTugas >= minTugas) {
            printf("Selamat Anda Lulus dengan Rangking C!\n");
        } else {
            printf("Silahkan mengikuti remidi ujian minggu depan!\n");
        }
    } else {
        printf("Maaf, silahkan mengulang kembali di Semester depan. Semangat!\n");
    }
    return 0;
}

void testLogicOperator() {
    logicOperator(60.0, 70.0, 5); // maaf
    logicOperator(70.0, 70.0, 10); // remidi minggu depan
    logicOperator(72.5, 80.0, 11); // C
    logicOperator(80.0, 75.0, 10); // B
    logicOperator(93.2, 87.0, 13); // A
    logicOperator(100.0, 78.5, 10); // S
    logicOperator(100.0, 78.5, 5); // maaf
}

// SIZEOF OPERATOR
int sizeOfVariable() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt)); 
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
}

void testsizeOfVariable() {
    sizeOfVariable();
}

// main test
void test() {
    testSaving();
    testTwoDimensions();
    testAboveFive();
    testIncAndDec();
    testAssignOperator();
    testCompareOperator();
    testLogicOperator();
    testsizeOfVariable();
}

int main() {
    test();

    return 0;
}