#include<iostream>
using namespace std;

void naturalNumbersInReverse(int n)
{
   if(n==1)
   {
      cout<<1;
      return;
   }
   cout<<n;
   naturalNumbersInReverse(n-1);
}

int main()
{
   int n=5;
   naturalNumbersInReverse(n);
   return 0;
}

