#ifndef CAN_H
#define CAN_H

#include <string>
using namespace std;

class Can
{
  private:
    string contents;
    int volume;
    
  public:
    Can();
    Can(string, int);
    display();
    int getVolume();
    string getContents();
};

#endif
