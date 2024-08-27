#include<iostream>
using namespace std;

class Student{ //TODO Basically Students is a new data type (Student is a class )
public:

 //* Declaring variables of the class Friends
string name; // ! it is a attributes for this class car.
int rollNo;
float cgpa;

};

int main()
    {

//?   Aise hi hum object ko banate hai aur hum 1 se jyada bhi object bana sekte hai
    Student S1; // This a Object
    S1.name = "Ashutosh Kumar Rao";
    S1.rollNo = 38;
    S1.cgpa = 5.27;


    Student S2 ;
    S2.name = "Awash Kumar";
    S2.rollNo = 40;
    S2.cgpa = 8.27;

 cout << S2.name << endl;
 cout << S1.name << endl;
    return 0;
    }