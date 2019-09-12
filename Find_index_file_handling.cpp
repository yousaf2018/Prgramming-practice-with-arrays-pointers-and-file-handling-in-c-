#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
  char a;
  int b,c;
  char array_1[8][8],array_2[8][8];
   ifstream read;
   read.open("grid.txt");
   while(!read.eof())
   {
     read.get(a);
     if(a=='A')
     {
       for(b=0;b<8;b++)
       {
         for(c=0;c<8;c++)
         {
           read >> a;
           array_1[b][c]=a;
         }
       }
     }
     if(a=='B')
     {
       break;
     }
   }
   read.close();

   for(b=0;b<8;b++)
   {
     for(c=0;c<8;c++)
     {
       if(array_1[b][c]=='X')
       {
         cout << "Index for X is " << b+1 << " " << c+1 << endl;
       }
     }

   }

}
