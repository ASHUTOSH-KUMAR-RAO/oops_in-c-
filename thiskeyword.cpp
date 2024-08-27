#include<iostream>
using namespace std;
class person {
  public:
  string name;
  int age;
  string place;

  person(string name,int age,string place){
    this->name = name; // * (this ->) iss key word ka means hota hai urrent element ko find krna 
    this->age = age;
    this->place = place;

  }

};
int main()
  {
    person P1("Bhupesh Pal",56,"Ramswaroop");
    person P2("upendra Kumar MIshra",60,"Ramswaroop");

    cout << P1.name << " " << P1.age << " " << P1.place << endl;
    cout << P2.name << " " << P2.age << " " << P2.place << endl;
  
  
return 0;
  }