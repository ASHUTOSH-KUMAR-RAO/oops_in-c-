# OOPS :- Stands For Object Oriented Programming in c++

```c++

Object ==> these are the entites in the real worlds "entites =>  Anything That Can be Exist"
class ==> it is like a blurPrint of the objects "blueplint => iska mtlb hota hai jo kuch bhi hum object  in likhte hai wo kaise dikhta hai "

Syntax FOr Class :-

#include <iostream>
#include<string>
using namespace std;

class ashuFriends{
    //data members
    // Property
    // methods
};
    int main (){

        return 0;
    }

```

## 1. Encapsulation :-

- Encapsulation is a concept in object-oriented programming (OOP) that binds(means add) together and the data and the methods that can be used to manipulate that data.

- It is a single unit called class.
- it helps Hiding Data.

## Access Modifiers :-

- Private :- Data & Methods accissible inside class

- public :- Data & methods accessible to everyone.

- protected :- data & methods accesible inside class & to its derived class

# Constructor :-

## There are Three type of Constructor:-

1. Non-Paramterished Constructor
2. Parameterished Constructor

```c++
Hero(string N,int W, string P, int Y) // This is called parameterished Constructor
```

3. Copy Constructor.default (it is used to copy properties of one object to another object)

## In general there are two Types of copy made in Our Objects.

1. Shallow Copy :- A shallow copy of an object copies all of the members values from one object to another.

2. Deep Copy :-A deep Copy on the other hand,not only copies the member values but also makes copies of any dynamically allocated memory that the ,e,bers point to.

### Properties

- Special method invoked(called) automatically at time of object creation .
- Used for initialisation.
- same name as class
- Constructor dosent have a run type.
- only called ones (automatically),at object creation.
- Memory allocation happens when constructor is called

## this Pointer ==>

- it is used to find current elemnet in our object

```c++
Syntax:-
this->name = name;
       Or
*(this).name
int x = 12;
int *ptr = &x;

- We Know that * => it is a dereferencing Operator in c++.

```

## Destructor :-

- Destructor is a special method which is invoked automatically at the time of object destruction.
- Destructor is used to free the memory which is allocated by the constructor.
- Destructor is called when the object goes out of scope.
- Destructor is called automatically by the compiler.
- it is also opposite of constructor.
- basically it means disallocate.
- Destructor is called when the object is destroyed.

### - Synatx :-

```
~className(){}
```

### Dynamic Memory Allocation :-

```c++
string *ashu = new string("Ashutosh Kumar Rao");  // basicaly this is called dynamically memory Allocation .
  cout << *ashu << endl;
```

## 2. Inheritance :-

- Inherit to take our insesters.
- (:) => is Kown as extends

## 3. Polymorphesum :-(ek naam ho aur bahut kaam ho )

- Several form in a Single theme.
  1. Compile time (basically it means Function overloading Polymorphesum)
- compile time Error :- Syntactical error (Syntax Error)

  2. Run time Polymorphesum (basically it means Virtual Function and overriding {same type ke multiple function is known as overloading})

- run time error :- Logical Error , indexing Error

## Function Overloading :-

```c++
class Loading {
  public:

  void sum(int a, int b){
    cout<< a+b << endl;  // this is called function overloading
  }

  void sum(int a,int b,int c){
    cout << a+b+c<< endl;
  }
};
```

- Operator Overloading :- Basically it is an operaor which perform diffrently based on the operands

## Function Overridding :-
```c++
class Scotty{
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
```
