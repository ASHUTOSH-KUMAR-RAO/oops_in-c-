#include <iostream>
using namespace std;
class cricketer
{
public:
  int runs;
  int wickets;
  float average;
};
class enginner
{
public:
  int experience;
  string domain;
};

class fodu : public enginner, cricketer //? basically isko hum bolte hai multiple inheritance
{
public:

};
int main()
{

  return 0;
}