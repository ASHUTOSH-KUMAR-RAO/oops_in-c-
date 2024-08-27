#include<iostream>
using namespace std;
class Loading {
  public:
  void sum(int a, int b){
    cout<< a+b << endl; 
  }

  void sum(int a,int b,int c){
    cout << a+b+c<< endl;
  }

  void sum (string a,string b){
    cout << a+b << endl;
  }
};
int main()
  {

    Loading Ashu;
    Ashu.sum(12,13);
    Ashu.sum(12,13,15);
    Ashu.sum("Ashutosh"," Neha");
    
  
return 0;
  }