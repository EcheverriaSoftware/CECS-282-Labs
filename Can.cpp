//Garrett Chavez, Giovanni Quevedo, Deva Nguyen, Miguel Echeverria
//Class (CECS 282-05)
//Week 2 - Lab 1 (Create a Can Class)
// Due Date (1/26/2021)
// Demoed at 7:45p.m.
// 
//I certify that this program is my own original work. I did not copy any part of this program from 
// any other source. I further certify that I typed each and every line of code in this program.
#include <iostream>
#include <string>
using namespace std;

class Can{
  private:
    string name;
    int volume;
  public:
    Can(){
      name = "";
      volume = 0;
    }

    Can(string name, int volume){
      this->name = name;
      this->volume = volume;
    }

    string getName(){
      return name;
    }

    int getVolume(){
      return volume;
    }
};

int main() {
  Can canArray[4];
  canArray[0] = Can("Pepsi", 12);
  canArray[1] = Can("Pears", 16);
  canArray[2] = Can("Mustard", 32);
  canArray[3] = Can("Apple Juice",40);

  int sum = 0;
  for(int i = 0; i < 4; i++){
    cout << canArray[i].getVolume() << " ounce can of " << canArray[i].getName() << endl;
    sum += canArray[i].getVolume();
  }

  cout << "\n\nThe sum of all can volumes = " << sum << "Ounces" << endl;
}
