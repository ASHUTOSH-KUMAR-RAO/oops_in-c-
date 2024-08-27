#include<iostream>
using namespace std;

class Friends {
    public:
    string name;
    float cgpa;
    string village;
    
};

void print(Friends F){
 cout << F.name<<" "<<F.cgpa<<" "<<F.village<< endl; 
}

void change (Friends F){
    F.cgpa = F.cgpa + 0.5;
}

int main()
    { // We Define Multiple bject.

    Friends F1;
    F1.name = "Awash Kumar";
    F1.cgpa = 8.5;
    F1.village = "SafdarGanj"; 

    // Friends F2;
    // F2.name = "Abhishek Kumar Singh";
    // F2.cgpa = 8.7;
    // F2.village = "KrishnaNagar";

    // Friends F3;
    // F3.name = "Jyoti Gupta";
    // F3.cgpa = 8.5;
    // F3.village = "Gorakhpur";

    // Friends F4;
    // F4.name = "Anjali Pandey";
    // F4.cgpa = 8.9;
    // F4.village = "Itawa";
    
    // We Print Multiple Object Data.

    print(F1); 
    change(F1); //!  We know that this is called Pass By Value FOr F1.      
    print(F1);  //* But If we want to change the value of F1, we need to use Pass By Reference.(&)
    // print(F2);
    // print(F3);
    // print(F4);

    return 0;
    }