#include <stdio.h>
#include <stdlib.h>

// Function Declaration
void writeToFiles(char fileName[], char mode[]);
void appendToFiles(char fileName[], char mode[]);
void readFiles(char fileName[], char mode[]);

int main()
{
  writeToFiles("testReadFile", "w");
  appendToFiles("testReadFile", "a");
  readFiles("testReadFile", "r");

  return 0;
}

void writeToFiles(char fileName[], char mode[])
{ 
  if(mode != "w"){
    printf("Error to Write the files!\n");
    exit(0);
  }

  FILE *fptr;
  fptr = fopen(fileName, mode);
  fprintf(fptr, "HALO GUYS!!\n");
  fclose(fptr);
}

void appendToFiles(char fileName[], char mode[])
{
  if(mode != "a"){
    printf("Error to append the files!\n");
    exit(0);
  }
  
  FILE *fptr;
  fptr = fopen(fileName, mode);
  fprintf(fptr, "Nama Saya Daniel Adi Pratama\n");
  fprintf(fptr, "Saya dari POLINES (Politeknik Negeri Semarang)\n");
  fprintf(fptr, "Jurusan Teknik Elektro\n");
  fprintf(fptr, "Program Studi D4 - Teknologi Rekayasa Komputer (TRK)\n");
  fprintf(fptr, "SALAM KENAL >_<");
  fclose(fptr);
}

void readFiles(char fileName[], char mode[])
{
  if(mode != "r"){
    printf("Error to read the files!\n");
    exit(0);
  }

  FILE *fptr;

  // open a file with read mod    
  fptr = fopen(fileName, mode);

  // store the content of the file
  char containerString[150];

  // check if the file is exist or not
  if(fptr != NULL)
  {  
    // read the content and store it inside 'containerString'
    // only read one line (REMEMBER THIS PLEASE)
    while (fgets(containerString, 150, fptr))
      printf("%s\n", containerString);    // print the file's content
  }
  else
    printf("Not able to open a file because it's doesn't exist!\n");

  // close the file
  fclose(fptr);
}

