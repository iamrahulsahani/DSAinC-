#include<iostream>
using namespace std;

int power(int x, int y)
{
   if(y==0)
   {
      return 1;
   }
   return (x*power(x, y-1));
}

int main()
{
   int x=2,y=3;
   cout<<power(x, y);
   return 0;
}
