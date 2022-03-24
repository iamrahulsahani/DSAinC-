#include<iostream>
using namespace std;

int sumOfCube(int n)
{
   if(n==1)
   {
      return 1;
   }
   return (n*n*n+sumOfCube(n-1));
}

int main()
{
   int n=3;
   cout<<sumOfCube(n);
   return 0;
}
