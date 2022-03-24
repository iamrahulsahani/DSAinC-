#include<iostream>
using namespace std;

int sumOfDigit(int n)
{
   if(n==0)          //Or              //if(n%10==0)
   {                                   //return n;
      return 0;
   }
   return (n%10+sumOfDigit(n/10));     //return(x%10+sumOfDigit(n/10));
}

int main()
{
   int n=123;
   cout<<sumOfDigit(n);
   return 0;
}
