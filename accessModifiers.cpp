#include <iostream>
using namespace std;
class Students
{
public:
  string name;
  int studes;
  Students(string name, int studes, float marks)
  {

    this->name = name;
    this->studes = studes;
    this->marks = marks;
  }

  float getMarks(){ //* This is also known as a getter 
         return marks;
  }

  void setMarks(float m){ //todo 🐻‍❄️ aur hum setter ki help se privates mein jo kuch bhi hai usko change lr denge.
    marks = m;
  }

private:
  float marks;
};

int main()
{
  Students s1("Ashutosh Kumar rao", 12, 92.45);  //! class ke andar hum private memeber ko bhi acces kr sekte hai lekin class constructor ke outer side nhi kr sekte hai 
  // s1.name = "Ashutosh Kumar Rao";
  // s1.studes = 12;
  // s1.marks = 87.95;

  cout<< s1.getMarks() << endl; //? lekin phir hum print karwane chahte hai private part ko to hum usko methods bana ker kaar sekte hai . ✅

  s1.setMarks(67.5);

  return 0;
}