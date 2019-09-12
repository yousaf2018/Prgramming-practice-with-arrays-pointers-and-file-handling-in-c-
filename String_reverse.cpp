#include <iostream>
#include <string.h>
using namespace std;

void string_reverse(char *ptr1,int);
int main()
{
  char name[20];
  int a;

  cout << "Enter name to print reverse\n";
  cin.getline(name,20);
  a=strlen(name);
  string_reverse(name,a);
}

void string_reverse(char *ptr1,int length)
{
  int a,b=length-1;
  for(a=0;a<=length;a++)
  {
   cout << *(ptr1+b);
   b--;
  }
  cout << "\n";

}
