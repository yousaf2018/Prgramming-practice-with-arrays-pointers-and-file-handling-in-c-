#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main()
{
  char a;
  int b,c,length,d;
  char name[20];
  cout << "Enter name you find out in every row\n";
  cin.getline(name,20);
  length=strlen(name);
  char array_1[8][8],array_2[8][8];
   ifstream read;
   read.open("grid.txt");
   while(!read.eof())
   {
     read.get(a);
     if(a=='B')
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
   }
   read.close();

   for(b=0;b<8;b++)
   {
     for(c=0;c<8;c++)
     {

       if(array_1[b][c]==name[0])
       {
        int n=0;
        for(d=c;d<length;d++)
        {
          if(array_1[b][d]!=name[n])
          {
            break;
          }
          if(d==length-1)
          {
            cout << name << " is found on row " << b+1 << endl;
          }
          c++;
          n++;
        }
      }

       }

     }
   }
