#include <stdio.h>

void openingFile(char fileName[], char mode[]);

int main()
{
  openingFile("testCreateFile1.txt", "w");
  return 0;
}

void openingFile(char fileName[], char mode[])
{
  FILE *fptr;

  // Create a file
  fptr = fopen(fileName, mode);

  // Close a file
  fclose(fptr);
}
