// Javier Sanchez
// Miguel Echeverria
// William Pham
// Ghabrille Ampo
// CECS282-06
// Week4 Lab2
// Due Date (2/11/2021)
//Time Demoed: 8:00pm

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int sort6(int& x1, int& x2 , int& x3, int&  x4, int& x5, int& x6)
{
  int nums[6];
  int size = sizeof(nums) / sizeof(nums[0]);
  nums[0] = x1;
  nums[1] = x2;
  nums[2] = x3;
  nums[3] = x4;
  nums[4] = x5;
  nums[5] = x6;
  sort(nums, nums + size);
  x1 = nums[0];
  x2 = nums[1];
  x3 = nums[2];
  x4 = nums[3];
  x5 = nums[4];
  x6 = nums[5];
  
  int sum = 0;
  for(int i = 0; i < 6; i++) {
      sum += nums[i];
  }

  return sum;
}


int main() {
  
  srand(time(0));
  int a = rand() % 400 + 100;
  int b = rand() % 400 + 100;
  int c = rand() % 400 + 100;
  int d = rand() % 400 + 100;
  int e = rand() % 400 + 100;
  int f = rand() % 400 + 100;
  cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
  cout << "Sum: " << sort6(a,b,c,d,e,f);
  cout << "\nSorted.\n" << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
}
