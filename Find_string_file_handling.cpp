#include "iostream"
using namespace std;
#include "fstream"
#include "string.h"
int main()
{
  char a;
  int counter=0,length,b;
  char name[20];
  cout << "Enter the text you want to search\n";
  cin.getline(name,20);
  length=strlen(name);
  ifstream  fin;
  fin.open("Find_string_file_handling.cpp");
  while(!fin.eof())
  {
    fin.get(a);
    if(a==name[0])
    {
    
      for(b=1;b<length;b++)
      {
        fin.get(a);
        if(a!=name[b])
        {
          break;
        }
      }
    if(b==length)
      {
        counter++;
      }

    }
  }
  if(counter==0)
  {
    cout << "Sorry there is no match for your word\n";
  }
  else if(counter>0)
  {
    cout << name << " is found " << counter << " times\n";
  }
  fin.close();
}
