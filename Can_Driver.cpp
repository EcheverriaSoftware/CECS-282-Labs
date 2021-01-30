#include <iostream>
#include "Can.h"
using namespace std;

void displayArray(Can arr[6])
{
  int sum = 0;
  for(int i = 0; i < 6; i++)
  {
    sum += arr[i].getVolume();
    cout << arr[i].getVolume() << " ounce can of " << arr[i].getContents() << endl;
  }
}

int main() 
{
  Can soda[6];
  soda[0] = Can("Coke", 12);
  soda[1] = Can("Mango Monster", 16);
  soda[2] = Can("Red Bull", 8);
  soda[3] = Can("Bang!", 16);
  soda[4] = Can("Venom Energy", 16);
  soda[5] = Can("Jolt Cola", 12);
  displayArray(soda);
}
