#include <iostream>
using namespace std;
class Vector
{
public:
  int size;
  int capacity;
  int *arr;

  Vector()
  {
    int size = 0;
    int capacity = 1;
    arr = new int[1];
  }

  void add(int element)
  {
    if (size == capacity)
    {
      capacity*= 2;
      int *arr2 = new int [capacity];
      for (int i = 0; i < size; i++)
      {
        arr2[i] = arr[i];
      }
      arr = arr2;
      
    }

    arr[size] == element;
  }

  void printArray (){
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
    
  }
};
int main()
{

  //! int *ashu = new int[5];  Dynamic Arrays
  // ashu[0] = 4;
  // ashu[3] = 5;
  // cout << ashu[3] << endl;

  Vector v;
  v.add(12);
  return 0;
}