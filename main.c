#include <stdio.h>

// Declare Functions
void copyString (char[], char[]);

int main(void) {

  char string1[] = "A string to be copied.";
  char string2[50];

  copyString (string2, string1);
  printf ("%s\n", string2);

  copyString(string2, "So is this.");
  printf ("%s\n", string2);
  
  return 0;
}

// Define Functions
void copyString (char to[], char from[]) {
  for ( ; *from != '\0'; from++, to++)
    *to = *from;

  *to = '\0';
}