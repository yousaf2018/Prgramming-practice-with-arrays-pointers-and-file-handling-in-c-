#include <iostream>
using namespace std;
int fibonacci_recursion(int,int,int);
int main()
{
  cout << "Enter the number to print fibonacci series less than number\n";
  int input;
  int a=0,b=1;
  cin >> input;
  if(input<=0)
  {
    cout << "Fibonacci series start from 0,1,1,2,3,5......\n";
  }
  else if(input==1)
{
  cout << a << endl;
}
else if(input==2)
{
  cout << a << " " << b << "\n";
}
  else if(input>2)
  {
    cout << a << " " << b << " ";
    fibonacci_recursion(input,a,b);
    cout << b << " " << a << " ";
    cout << "\n";
  }

}


int fibonacci_recursion(int input,int a,int b)
{
  int c;

  c=a+b;
if(c>=input)
{
  cout << "\n";
  return 0;
}
  cout << c << " ";
  c=a+b;
  fibonacci_recursion(input,b,c);

    cout << c << " ";
}
