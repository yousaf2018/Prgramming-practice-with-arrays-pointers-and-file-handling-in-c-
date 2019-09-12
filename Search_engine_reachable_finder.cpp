#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
  char a;
  int b,c,m,n,p;
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
         //row on right side flow
         for(m=c+1;m<8;m++)
         {
           if(array_1[b][m]==1)
         {
           break;
         }
           else if(m==7)
           {
             cout << "X is reachable from right side of row\n";
           }
         }
         //row on left side flow
         for(m=c-1;m>=0;m--)
         {
           if(array_1[b][m]==1)
         {
           break;
         }
         else if(m==0)
         {
           cout << "X is reachable from left side of row\n";
         }

         }
         //coulums from top to bottom
         for(m=b-1;m>=0;m--)
         {
           if(array_1[m][c]==1)
         {
           break;
         }
         else if(m==0)
         {
           cout << "X is reachable from coulum top to bottom\n";
         }

         }
         //coulum from bottom to top
         for(m=b+1;m<8;m++)
         {
           if(array_1[m][c]==1)
         {
           break;
         }
           else if(m==7)
           {
             cout << "X is reachable from coulum bottom to top\n";
           }
         }
         //
       }
     }

   }

}
