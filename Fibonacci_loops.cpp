#include <iostream>
using namespace std;
int main()
{
  cout << "Enter the number to print fibonacci series less than number\n";
  int input,a;
  cin >> input;
  int array[input-1];
  array[0]=0;
  array[1]=1;
  for(a=2;a<input;a++)
  {
    array[a]=array[a-1]+array[a-2];
  }
  for(a=0;a<input;a++)
  {
    if(array[a]>=input)
    {
      break;
    }
    cout << array[a] << " ";
  }
  cout << "\n";
  for(a=input-1;a>=0;a--)
  {
    if(array[a]>=input||array[a]<0)
   {
  continue;
   }
    cout << array[a] << " ";
  }
 cout << "\n";
}
