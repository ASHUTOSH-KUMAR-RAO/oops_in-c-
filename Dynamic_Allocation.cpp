#include<iostream>
using namespace std;

class Hostel{
  public :

  string name;
  int friends;
  int study;

  Hostel(string name, int friends, int study){

    this->name = name;
    this ->friends = friends;
    this -> study = study;

  }
};
int main()
  {
    Hostel h1 ("Ashutosh Kumar Rao", 4 , 10);
    Hostel h2 ("Nikhil Singh", 4 , 10);
    Hostel *h3 = new Hostel ("Sabhyam Maddhesiya", 4 , 10); // isko hum aise print karwate hai (->)



    cout << h1.name << endl;
     cout << h3->name << endl;

  // string a = "Ashutosh Kumar Rao";
  // cout << a << endl;
  // ?  string *pntr = &a;   => this method is knows is staically Allocation  
  // cout << *pntr << endl;



  // string *ashu = new string("Ashutosh Kumar Rao");
  // cout << *ashu << endl;
  
  
return 0;
  }