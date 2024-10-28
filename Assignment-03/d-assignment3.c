#include<stdio.h>
#include<stdlib.h>

char* read_dyn_string() {
  char *pStr = NULL; // pointer to final string
  char c = 0; // character to be read
  int i = 0, j = 1; // index, size of memory allocation

  // allocate size of 1 character to address of str pointer
  // this 1 extra bit will be used for \0
  // additional characters will be allocated additional memory
  pStr = (char*)malloc(sizeof(char)); 

  while (c != '\n') {
    c = getc(stdin); // read in next character of input
    if (c != '\n') {
      pStr = (char*)realloc(pStr, j * sizeof(char)); // allocate extra size for character
      pStr[i] = c; // allocate character to pointer address

      i++;
      j++;
    }
  }
  pStr[i] = '\0'; // last character end of string

  return pStr;
}

int main() {
  /*char firstName[100];*/
  /*char lastName[100];*/
  char *pFirstName = NULL;
  char *pLastName = NULL;

  printf("Please provide your first name:\n");
  /*scanf("%s", &firstName);*/
  /*getchar();*/
  pFirstName = read_dyn_string();
  printf("Please provide your last name:\n");
  /*scanf("%s", &lastName);*/
  /*getchar();*/
  pLastName = read_dyn_string();

  printf("Welcome, %s %s!\n", pFirstName, pLastName);

  return 0;
}
