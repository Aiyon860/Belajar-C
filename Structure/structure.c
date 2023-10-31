#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct identity {
  char fullName[50];
  int age;
  int birthYear;
  char bloodType[2];
};

struct recommendedGameSpecs {
  char operatingSystem[50];
  char processor[100];
  int ram;   // consider the memory is in GB format
  char graphicsCard[100];
  int directX;
  bool useNetwork;
  int storage;  // consider the storage is in GB format
  char additionalNotes[100];
};

int exercise();
int realLife(char gameName[]);

int main()
{
  // exercise();
  realLife("NFS Payback");
  return 0;
}

int exercise()
{
  // create structure variable of 'identity' called firstPerson
  struct identity firstPerson;

  // assign values to members of firstPerson
  strcpy(firstPerson.fullName, "Daniel Adi Pratama");   // for string we must use strcpy() function.
  firstPerson.age = 18;
  firstPerson.birthYear = 2005;
  strcpy(firstPerson.bloodType, "A");

  // print values
  printf("Nama: %s\n", firstPerson.fullName);
  printf("Umur: %d\n", firstPerson.age);
  printf("Tahun Lahir: %d\n", firstPerson.birthYear);
  printf("Golongan Darah: %s\n", firstPerson.bloodType);

  printf("\n");

  // simpler syntax (don't have to use strcpy for string type)
  struct identity secondPerson = {"Tirza Nadya Wibowo", 18, 2005, "O"};

  // print values
  printf("Nama: %s\n", secondPerson.fullName);
  printf("Umur: %d\n", secondPerson.age);
  printf("Tahun Lahir: %d\n", secondPerson.birthYear);
  printf("Golongan Darah: %s\n", secondPerson.bloodType);

  printf("\n");

  // copy structure to another structure
  struct identity thirdPerson = secondPerson;

  // modify values (using thirdPerson structure variable)
  strcpy(thirdPerson.fullName, "Eunike Jihanaya");
  thirdPerson.age = 19;
  thirdPerson.birthYear = 2004;
  strcpy(thirdPerson.bloodType, "AB");

  // print values
  printf("Nama: %s\n", thirdPerson.fullName);
  printf("Umur: %d\n", thirdPerson.age);
  printf("Tahun Lahir: %d\n", thirdPerson.birthYear);
  printf("Golongan Darah: %s\n", thirdPerson.bloodType);

  printf("\n");

  return 0;
}

int realLife(char gameName[])
{
  struct recommendedGameSpecs nfsPayback;

  strcpy(nfsPayback.operatingSystem, "64-bit Windows 10 or later"); 
  strcpy(nfsPayback.processor, "Intel i5 4690K @ 3.5GHz or AMD FX");
  nfsPayback.ram = 8; 
  strcpy(nfsPayback.graphicsCard, "AMD Radeon RX 480 4GB, NVIDIA GeForce GTX 1060 6GB");
  nfsPayback.directX = 11;
  nfsPayback.useNetwork = true; 
  nfsPayback.storage = 30;
  strcpy(nfsPayback.additionalNotes, "NONE");

  printf("---------------------------------------------------------------------------------------\n");
  printf("  %42s [%s]                                                                        \n", "RECOMMENDED GAME SPECIFICATION!!!", gameName);
  printf("---------------------------------------------------------------------------------------\n");
  printf("  %20s  | %s                                                                         \n", "INFO", "DESCRIPTION");
  printf("---------------------------------------------------------------------------------------\n");
  printf("  %20s  | %s                                                                         \n", "Operating System", nfsPayback.operatingSystem);
  printf("  %20s  | %s                                                                         \n", "Processor", nfsPayback.processor);
  printf(" %20s   | %d GB                                                                      \n", "RAM", nfsPayback.ram);
  printf("  %20s  | %s                                                                         \n", "Graphics Card", nfsPayback.graphicsCard);
  printf("  %20s  | %d                                                                         \n", "Direct X", nfsPayback.directX);
  printf(" %20s   | %d = Yes                                                                   \n", "Network", nfsPayback.useNetwork);
  printf("  %20s  | %d GB                                                                      \n", "Storage", nfsPayback.storage);
  printf("  %20s  | %s                                                                         \n", "Additional Notes", nfsPayback.additionalNotes);
  printf("---------------------------------------------------------------------------------------\n");

  return 0;
}