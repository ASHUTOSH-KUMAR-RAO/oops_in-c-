#include <iostream>
using namespace std;
class Scooty
{
public:
  int topSpeed;
  float milage;

   virtual void  Sound() //* Power of Virtual Keywords
  { //! parent Class
    cout << "vroom vroom" << endl;
  }

private:
  int bootSpace;
};

class Bike : public Scooty
{ //? derived class/child class
public:
  int gears;

  void Sound()
  {
    cout << "rinji rinji" << endl;
  }
};
int main()
{

  //  ? 1st Way (Function Calling 🦭)
  Bike B;
  B.Sound();
  Scooty s;
  s.Sound();

  cout <<endl;

  //!  2nd Way (Object Pointer 🐻‍❄️)
  // Bike *b = new Bike();
  // b->Sound();

  Scooty *S = new Scooty();
  S->Sound();

  Scooty *b = new Bike();
  b->Sound();
  return 0;
}