// CECS 282-06
// Lab Week 8 (Lab 1)
// Miguel Echeverria, Thomson Nguyen, Destin Byrd
// Date: 3/9/2021
// Time Dem: 8:20 PM
#include <iostream>
using namespace std;

int strlen(char * str){
  
  int length = 0;
  int counter = 0;
  while(*(str + counter) != '\0')
  {
    length++;
    counter++;
  }
  return length;
}

char* strcpy(char *dest, char *source)
{
  int counter = 0;
  int length = strlen(source);
  while(length >= 0)
  {
    *(dest + counter) = *(source + counter);
    counter++;
    length--; 
  }
  return dest; 
}
char* strcat(char *dest, char *source)
{
  int counter = 0;
  int length = strlen(dest);
  while(*(dest + counter) != '\0')
  {
    *(dest + counter + length) = *(source + counter);
    counter++;
  }
  return dest; 
}

int main() 
{
    char  str1 [] = "MiguelTesting";
    char  str2 [] = "AnglABCFDE";
    char  str3 [] = "M";
    char  str4 [] = "Angel";
    cout << strlen(str1) << endl;
    strcpy(str1, str2);
    cout << str1 << endl;
    strcat(str3, str4);
    cout << str3 << endl;
}
