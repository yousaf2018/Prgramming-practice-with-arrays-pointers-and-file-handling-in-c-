#include <iostream>

using namespace std;

void swap(int *ptr1,int *ptr2);

int main()
{
  cout << "Enter two number for to swap by refrence\n";
  int value_1,value_2;
  cin >> value_1;
  cin >> value_2;
  swap(&value_1,&value_2);
  cout << value_1 << " " << value_2 << endl;
}

void swap(int *ptr1,int *ptr2)
{
  int temp;
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
}
