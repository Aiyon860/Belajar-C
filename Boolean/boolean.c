#include <stdio.h>
#include <stdbool.h>

// KETTLE
int kettle(int initialAmount, int waterAddition){
    // let say water volume in ml unit and max volume is 120 ml
    int bottle = initialAmount; 
    int bottleFull = 120;

    if (bottle < bottleFull && !(bottle > bottleFull)) {
        bottle += waterAddition;
        if (bottle == 0) {
            printf("Botol tetap kosong! (Jumlah: %i ml)\n", bottle);
        } else if (bottle < bottleFull) {
            printf("Botol terisi tapi tidak penuh! (Jumlah: %i ml)\n", bottle);
        } else if (bottle == bottleFull) {
            printf("Botol terisi dengan penuh! (Jumlah: %i ml)\n", bottle);
        }
    } else {
        printf("Botol tidak bisa diisi! Emang penuh!\n");
    }
    return 0;
}

void testKettle() {
    kettle(0, 0);
    kettle(20, 60);
    kettle(0, 120);
    kettle(120, 0);
}

// MARRIAGE
// 0 is false, 1 is true
int marriage(char man, char woman) {
    bool statusMarriage = true;
    char manYes = man;
    char womanYes = woman;

    if (manYes == 1 && womanYes == 1 && !(manYes > 1) && !(womanYes > 1)) {
        printf("Tuhan Yesus Memberkati kalian!\n");
    } else if (manYes == 0 && womanYes == 1) {
        printf("Tuhan Yesus mungkin merencanakan yang lebih hebat lagi untuk kamu!\n");
    } else if (manYes == 1 && womanYes == 0) {
        printf("Tuhan Yesus mungkin merencanakan yang lebih hebat lagi untuk kamu!\n");
    } else {
        printf("Waduh pie ki??\n");
    }
}

void testMarriage() {
    marriage(0, 0); 
    marriage(1, 0); 
    marriage(0, 1); 
    marriage(1, 1); 
}

void test() {
    testKettle();
    testMarriage();
}

int main() {
    test();

    return 0;
}