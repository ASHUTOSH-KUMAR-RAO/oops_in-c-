#include<iostream>
using namespace std;

class Ashutosh{
    public:

  string name;
  int rno;
  int age;
  int year;

  Ashutosh(string a,int r){

    name = a;
    rno = r;
    // age = ag;

  }

  Ashutosh(int Y){
   year = Y;
  }

Ashutosh(string ash,int Yr,int R){

    name = ash;
    year = Yr;
    rno = R;

}

};

void print(Ashutosh A){
cout <<"name : " << A.name << " RollNo : "<< A.rno << " Age : " << A.age << " BornYear: " <<A.year<< endl;
}
int main()
    {

        Ashutosh A1("Ashutosh Kumar Rao",38);
        // A1.name = "Ashutosh Kumar rao";
        // A1.rno = 36;
        A1.age = 21;
        A1.year = 2002;

        Ashutosh A2(2002);

        Ashutosh A3 ("Awash Kumar",2002,33);

        print(A1);
        cout << A2.year << endl;
        print(A3);
        
    
return 0;
    }