#include <iostream>
using namespace std;
#include "fstream"
#include "string"
int main()
{
  //Read>>is used for character by character input
  //ifstream Read
  //Read.get(with space and \n);
  char a;
  int number=0;
  ifstream  fin;
  fin.open("file_handling.cpp");
  while(!fin.eof())
  {
    fin.get(a);
    cout << a;
  }
  fin.close();
}
