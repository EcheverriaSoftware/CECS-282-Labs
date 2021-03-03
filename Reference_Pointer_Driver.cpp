//Name: Gabriel Zermeno, Garrett Chavez, Miguel Echeverria, Giovanni Contreras
//Class(CECS 282-06)
//Due Date 03/02/21
//Demoed at 08:17 PM
#include <iostream>
using namespace std;

void swap(int *x, int &y) {
  int temp = *x;
  *x = y;
  y = temp;
}

int main() {
  int x = 1;
  int y = 2 ;
  cout << "Before: " << x << ", " << y << endl;
  swap(&x, y);
  cout << "After: " << x << ", " << y << endl;
}
