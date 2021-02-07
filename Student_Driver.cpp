//Name:
// Edward Kuoch
// Ghabrille Ampo
// Miguel Echeverria
// Sze Man Tang
//Date: 2/4/2021
//Time Demoed: 7:50pm
// CECS 282-06
#include <string>
#include <iostream>
using namespace std;

class Student
{
  private:
    string name;
    int score;
    char grade;
  public:
    Student();
    Student(string name, int score);
    void print();
};

Student::Student(){
  name = " ";
  score = 0;
  grade = ' ';
}

Student::Student(string n, int s)
{
  name = n;
  score = s;
  if (s >= 90)
    grade = 'A';
  else if (s < 90 && s >= 80)
    grade = 'B';
  else if (s < 80 && s >= 70)
    grade = 'C';
  else if (s < 70 && s >= 60)
    grade = 'D';
  else 
    grade = 'F';
}
void Student::print(){
  cout << name << " "<< score << " " << grade << endl;
}

int main() {
  Student student[5];
  student[0] = Student("Tom",85);
  student[1] = Student("Alice",71);
  student[2] = Student("Jack",93);
  student[3] = Student("Mary",65);
  student[4] = Student("Sue",54);
  for (int i = 0; i < 5; i++){
    student[i].print();
  }
}
