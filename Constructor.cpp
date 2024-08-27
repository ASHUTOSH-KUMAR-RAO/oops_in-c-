
#include<iostream>
using namespace std;

class Hero {
    public:

     string name;
     int Weight;
     string place;
     int Year;


     Hero(string N,int W, string P, int Y){ //! Basically it is called Constructor. aur sabse important hum any How class ke andar hi Constructor bnate hai

      name = N;
      Weight = W;
      place = P;
      Year = Y;
     }
};

void print(Hero h){
    cout << "Name: " << h.name << " Weight: " << h.Weight << " Place: "<< h.place << " Year: " << h.Year << endl;
}
int main()
    {
          Hero h1("IronMan",91,"New York City",100);

        //   h1.name = "Iron Man";
        //   h1.Weight = 89;
        //   h1.place = "New York City";
        //   h1.Year = 52;

        //   Hero h2;
        //   h2.name = "Thor";
        //   h2.Weight = 77;
        //   h2.place = "Asgard";
        //   h2.Year = 1000;

          print(h1);
//           print(h2);
return 0;

#include<iostream>
using namespace std;

class Hero {
    public:

     string name;
     int Weight;
     string place;
     int Year;


     Hero(string N,int W, string P, int Y){ //! Basically it is called Constructor. aur sabse important hum any How class ke andar hi Constructor bnate hai

      name = N;
      Weight = W;
      place = P;
      Year = Y;
     }
};

void print(Hero h){
    cout << "Name: " << h.name << " Weight: " << h.Weight << " Place: "<< h.place << " Year: " << h.Year << endl;
}
int main()
    {
          Hero h1("IronMan",91,"New York City",100);

        //   h1.name = "Iron Man";
        //   h1.Weight = 89;
        //   h1.place = "New York City";
        //   h1.Year = 52;

        //   Hero h2;
        //   h2.name = "Thor";
        //   h2.Weight = 77;
        //   h2.place = "Asgard";
        //   h2.Year = 1000;

          print(h1);
//           print(h2);
return 0;
    }