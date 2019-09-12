#include <iostream>

using namespace std;

int checkprime(int);
int main()
{
    int a,Ret;
cout << ("Enter value for to check it is prime or not\n");
cin >> a;
while(true)
{
  a--;
  if(a<2)
  {
    break;
  }
Ret=checkprime(a);
if(Ret==1)
{
    cout << a << endl;
}


}

}

int checkprime(int a)
{
int b,c,count=0,p;


if(a<=1){
p=0;
return(p);
}
else if(a==2){
p=1;
return(p);
}
else if(a>2){
for(b=1;b<=a;b++){
c=a%b;
if(c==0){
count=count+1;
}
}
 if(count>=3){
p=0;
return(p);
}
else
{
    p=1;
    return(p);
}


}
}
