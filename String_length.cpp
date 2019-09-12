#include <iostream>
#include <string>
using namespace std;

void string_length(char *ptr1);
int main()
{
  char name[20];


  cout << "Enter name to find the length\n";
  cin.getline(name,20);
  string_length(name);
}

void string_length(char *ptr1)
{
  int counter=0;
  char *ptr2;
  ptr2=ptr1;
  int a;
  for(a=0;a<20;a++)
  {
    char b; 
    b=*ptr1;
    if(*ptr1=='\0')
    {
      cout << "String length :>>" << counter << endl;
      break;
    }
    ptr1++;
    counter++;
  }
}
