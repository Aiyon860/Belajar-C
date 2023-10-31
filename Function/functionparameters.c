#include <stdbool.h> 
#include <stdio.h>

// predefined function -> to execute the code
//
void identity(char name[], int age, int currentYear);

int main() {
  char name[100];
  int age, currentYear;

  while (true) {
    printf("----- MASUKAN IDENTITAS ANDA! -----\n");
    printf("Masukkan Nama Anda: ");
    scanf("%s", &name);
    printf("Masukkan Umur Anda: ");
    scanf("%d", &age);

    if (!(age >= 12 || age < 100))
      printf("Umur harus direntang 0 - 99!\n\n");

    printf("Masukkan Tahun Sekarang: ");
    scanf("%d", &currentYear);

    if (!(currentYear >= 1900 || currentYear < 2024))
      printf("Tahun harus direntang 1900 - 2023!\n\n");

    if ((age >= 12 && age < 100) && (currentYear >= 1900 && currentYear < 2024))
      break;
  }

  identity(name, age, currentYear);

  return 0;
}

void identity(char name[], int age, int currentYear) {
  printf("\n----- IDENTITAS DIRI -----\n");
  printf("Nama: %s\n", name);
  printf("Umur: %d\n", age);

  int birthYear = currentYear - age;

  printf("Tahun Lahir: %d\n", birthYear);
}
