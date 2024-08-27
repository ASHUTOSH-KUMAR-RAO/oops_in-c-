#include<iostream>
using namespace std;

class Scooty { //? also known as Parent Class
public:
int topspeed;
float millage;
};

class Bike : public Scooty{  //! child class / Derived Class  : => isko hum bolte hai extends krna means badhana.
  public: 
  int gears;
};

int main()
  {
    Bike b1;
    b1.gears = 12;
    b1.topspeed = 80;
    b1.millage = 56.6;
  
return 0;
  }