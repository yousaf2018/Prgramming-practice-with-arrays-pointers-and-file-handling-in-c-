#include <iostream>
#include <string.h>
using namespace std;
void palindrome(char *ptr1,int);

int main()
{
  cout << "Enter Word for to check it is palindrome or not\n";
  char name[20];
  int length;
  cin.getline(name,20);
  length=strlen(name);
  palindrome(name,length);
}

void palindrome(char *ptr1,int length)
{
  int a,b=length-1;
  char copy[20];
  for(a=0;a<length;a++)
  {
   copy[a]=*(ptr1+b);
   b--;
  }
  for(a=0;a<length;a++)
  {
    if(copy[a]!=*(ptr1+a))
    {
      cout << "Sorry it is not pallindrome\n";
      break;
    }
    else if(a==length-1)
    {
      cout << "Yes your word is palindrome\n";
    }

  }
}
