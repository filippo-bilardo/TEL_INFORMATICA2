#include <stdio.h>
#include <string.h>

// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};
  struct myStructure s2;
  s2=s1;
  // Print values
  printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);
  
  // Modify values
  s1.myNum = 30;
  s1.myLetter = 'C';
  strcpy(s1.myString, "Something else");
  s2=s1;
  s2.myNum = 32;

  // Print values
  printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

  return 0;
}
