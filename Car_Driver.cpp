//Ashur Motlagh, Edward Kuoch, Miguel Echeverria,Javier Sanchez 
//Time Demoed: 8:09PM
#include <iostream>
#include <string>
using namespace std;

struct Car
{
  string make;
  string model;
  int manufactureYear; 
  string color;
  int currentMileage;
  int mpg;
  int salePrice;
};


void displayCars(Car * c)
{
  for(int i = 0; i < 5; i++)
  {
    cout << c[i].make << " " << c[i].model << " " << c[i].manufactureYear << " " << c[i].color << " " << c[i].currentMileage << " " << c[i].mpg << " " << c[i].salePrice << endl;
  }
}
int main() 
{
  Car carLot [5];
  carLot[0] = {.make = "Wayne", .model = "Batmobile", .manufactureYear =  2021, .color = "Black", .currentMileage = 0, .mpg = 7, .salePrice = 9000000};
  
  carLot[1] = {.make = "Toyota", .model = "Prius Three", .manufactureYear =  2014, .color = "Black", .currentMileage = 69000, .mpg = 51, .salePrice = 13000};
  
  carLot[2] = {.make = "Tesla",.model = "X", .manufactureYear = 2021, .color = "Black", .currentMileage = 0 , .mpg = 120 
  , .salePrice = 100000};

  carLot[3] = {.make = "Honda", .model = "Accord", .manufactureYear =  2020, .color = "Grey", .currentMileage = 8000, .mpg = 25, .salePrice = 35000};

 carLot[4] = {.make = "Nissan",.model = "GTR", .manufactureYear = 2021, .color = "Blue", .currentMileage = 420 , .mpg = 10 
  , .salePrice = 120000};
  
  displayCars(carLot);
  
}
