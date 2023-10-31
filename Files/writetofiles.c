#include <stdio.h>
#include <stdlib.h>

void writeToFiles(char fileName[], char mode[]);
void appendToFiles(char fileName[], char mode[]);

int main()
{
  appendToFiles("testWriteFile.txt", "a");
  return 0;
}

void writeToFiles(char fileName[], char mode[])
{
  if(mode != "w")
    exit(0);

  FILE *fptr;
  fptr = fopen(fileName, mode);
  fprintf(fptr, "Halo Dua");
  fclose(fptr);
}

void appendToFiles(char fileName[], char mode[])
{
  if(mode != "a")
    exit(0);

  FILE *fptr;
  fptr = fopen(fileName, mode);
  fprintf(fptr, "Menambah kata baru: Halo tiga\n");
  fprintf(fptr, "Menambah kata baru: Halo empat");
  fclose(fptr);
}
