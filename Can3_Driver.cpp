// James Cho, Miguel Echeverria, Saul Martinez, Javier Sanchez
// CECS 282-06
// Project Name (Week 5, Lab2 - stretch can)
// 02/18/2021
// Demo Time: 8:11PM

#include <iostream>
using namespace std;

class Can
{
  private:
    string contents;
    int volume;
  public:
    Can() 
    {
        contents = "empty";
        volume = 0;
    }

    Can (string c, int v) 
    {
        contents = c;
        volume = v;
    }
    
    int getVolume() {
      return volume;
    }

    int * getVolumePointer() {
      return &volume;
    }

    // Method gets the name of the can
    string getContents() 
    {
        return contents;
    }

    string * getContentsPointer() {
      return &contents;
    }

    void display() 
    {
        cout << contents << ":" << volume << endl;
    }
};

void pour(Can & c1, Can & c2) 
{
  int* temp = c1.getVolumePointer();
  *temp = *temp + c2.getVolume();
  temp = c2.getVolumePointer();
  *temp = 0;
  string* temp2 = c1.getContentsPointer();
  *temp2 = *temp2 + " " + c2.getContents();
  temp2 = c2.getContentsPointer();
  *temp2 = "";
}

Can mix(Can c1, Can c2)
{
  return Can(c1.getContents() + "&" + c2.getContents(), c1.getVolume()+c2.getVolume());
}

void stretch(Can & can, int expand) 
{
  int* temp = can.getVolumePointer(); 
  *temp += expand;
} 

int main() 
{
  Can c1("Peaches", 15);
  Can c2("Peas", 20);
  Can c3("soup", 24);
  Can c4 = mix(c1,c3); // c4 will have a mixture of c1 and c2. c1 and c3 remain unchanged
  pour(c2,c1); // pour c1 into c2. c1 will be empty
  stretch(c3,20); // stretch c3 by 20 ounces
  cout << "C1 - ";
  c1.display(); // empty:0
  cout << "C2 - ";
  c2.display(); // Peas,Peaches:35
  cout << "C3 - ";
  c3.display(); // soup:44
  cout << "C4 - ";
  c4.display(); // Peaches, soup:39

  return 0;
}
