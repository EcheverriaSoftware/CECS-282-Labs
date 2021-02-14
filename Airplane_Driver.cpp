// Name: Thomson Nguyen, Erik Nguyen, Miguel Echeverria
// Class(CECS 282-06)
// Due Date 02/09/21
// Demoed at 8:17 PM
// I certify that this program is my own original work. I did not copy any part of program //from any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Airplane Class
class Airplane 
{
    private:
		string model;
        int altitude;
        int minAltitude;
        int maxAltitude;
	public:
		Airplane();
    	Airplane(string m, int Alt, int minAlt, int maxAlt);
		void display();
        void setAltitude();
        int getAltitude();
        bool crash(Airplane);
};

Airplane::Airplane() 
{
    model = "";
    altitude = 0;
    minAltitude = 0;
    maxAltitude = 0;
}
Airplane::Airplane(string m, int Alt, int minAlt, int maxAlt) 
{
    model = m;
    altitude = Alt;
    minAltitude = minAlt;
    maxAltitude = maxAlt;
}
void Airplane::display()
{
	cout << "Model:" << model << "\tAltitude:" << altitude << endl;
}

void Airplane::setAltitude()
{
    altitude = rand() % (maxAltitude - minAltitude) + minAltitude;
}

int Airplane::getAltitude()
{
    return altitude;
}

bool Airplane::crash(Airplane plane)
{
	if(abs(plane.getAltitude() - altitude) < 200)
		{
			return true;
		}
	return false;
}
int main() 
{
    srand(time(NULL));
    Airplane airplane1("Lear Jet", 0, 2000, 3000);
    Airplane airplane2("MIG Fighter", 0, 2500, 3200);
	int crashed = 0;
    for (int i = 0; i < 1000; i++) {
        airplane1.setAltitude();
        airplane2.setAltitude();
        if (airplane1.crash(airplane2) == true) {
            airplane1.display();
            airplane2.display();
            cout << "Mayday mayday!" << endl;
            cout << "We have a crash!" << endl;
			crashed++;
            cout << endl;
        }
    }
    cout << "Total Crashes:" << crashed; 
}
