#include <stdio.h>

int strukturKelas() {
    int jumlahSiswa = 30;
    char ketuaKelas[] = "Daniel Adi Pratama";

    printf("Kelas TI-1A terdiri dari %i siswa, memiliki ketua kelas bernama %s\n", jumlahSiswa, ketuaKelas);

    return 0;
}

int rapot(char nama[]) {
    int average = 100;
    float ipk = 4.00;
    char grade = 'A';
    
    int total = average * 8;

    printf("\nName\t\t: %s\n", nama);
    printf("IPK\t\t: %.2f\n", ipk);
    printf("Grade\t\t: %c\n", grade);
    printf("Rata-rata nilai\t: %i\n", average);

    printf("Total 8 semester (roughly): %i\n", total);

    return 0;
}

int main() {
    strukturKelas();
    rapot("Tirza Nadya Wibowo");

    return 0;
}
