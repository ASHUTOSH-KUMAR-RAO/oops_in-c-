
//  ? FUNCTION INSIDE CLASS ❤️❤️❤️❤️❤️❤️❤️❤️❤️

#include <iostream>
using namespace std;

class friends
{
public:
  string name;
  int age;
  int rollNo;
  string clgName;

  friends(string name, int age, int rollNo, string clgName)
  {
    this->name = name;
    this->age = age;
    this->rollNo = rollNo;
    this->clgName = clgName;
  }

  void print()
  { //!  This is called Function inside the class  💕
    cout << this->name << " " << this->age << " " << this->rollNo << " " << this->clgName << endl;
  }

  int marksCalculate()
  {
    return age / rollNo;
  }
};
int main()
{
  friends f1("Nikhil", 18, 13, "S.V.M Deoria");
  friends f2("Sabhyam", 19, 13, "S.V.M Deoria");
  friends f3("Awash", 20, 13, "S.R.M Lucknow");
  friends f4("Abhisek", 21, 13, "S.R.M Lucknow");
  friends f5("Ankit", 20, 13, "S.V.M Deoria");
  friends f6("jyoti", 24, 13, "S.R.m Lucknow");
  friends f7("Battery", 25, 13, "S.R.m Lucknow");

  f1.name = "Ashutosh Kumar Rao"; // todo=> aise update bhi kaar sekte hai kuch bhi

  f1.print();
  f2.print();

  cout << f1.marksCalculate() << endl;

  return 0;
}
