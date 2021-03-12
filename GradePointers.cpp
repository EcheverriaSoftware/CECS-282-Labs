//Miguel Echeverria, Gabriel Zermeno, Melissa Gaines, Saul Martinez
// demoed at 7:51
#include <iostream>
const int SIZE = 5;

using namespace std;
int main () {
   int sum; 
   int  grade[SIZE] = {10, 20, 30, 40, 50};
   int* aptrs [SIZE];
  

   for (int i = 0; i < SIZE; i++) {
     sum += grade[i];
   

      cout << "Value of grade[" << i << "] = " << grade[i] << endl;
      aptrs[i] = &grade[i];
      //cout << "Value of aptr[i] = " << *(aptrs+i) << endl;
      //cout << grade[i] << endl;
      cout << (aptrs + i) << endl;
      cout << aptrs[i] << endl;
   }
   cout << "The average is: " << (sum / SIZE) << endl;

   

   return 0;

}
