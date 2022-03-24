#include<iostream>
using namespace std;

void naturalNumbers(int n)
{
   if(n==1)
   {
      cout<<1;
      return;
   }
   naturalNumbers(n-1);
   cout<<n;
}

int main()
{
   int n=5;
   naturalNumbers(n);
   return 0;
}

