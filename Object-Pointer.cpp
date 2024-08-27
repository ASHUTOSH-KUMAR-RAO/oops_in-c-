//! Very Important Topics :-

#include <iostream>
using namespace std;

class Champions
{
public:
  string name;
  int age;
  float winPrize;

  Champions(string name, int age, float winPrize)
  {
    this->name = name;
    this->age = age;
    this->winPrize = winPrize;
  }
};
int main()
{
  Champions c1("Ashutosh kumar Rao", 23, 5569.10);
  // cout << c1.name << endl;

  Champions *ptr1 = &c1;
  cout << (*ptr1).name << endl;
  (*ptr1).name = "Awash Kumar"; //! to hum aise modified bhikaar sekte hai
  cout << (*ptr1).name << endl;
  return 0;
}

// ? Note :- a->b == (*a).b
