#include<iostream>
using namespace std;

int sumOfSquaresOfDigit(int n)
{
   if(n==0)               //or                if(n/10===0)
   {                                         //return (n*n);
      return 0;               
   }
   int s=n%10;
   return (s*s+sumOfSquaresOfDigit(n/10));   //return((n%10)*(n%10)+sumOfSquaresOfDigit(n/10));
}

int main()
{
   int n=12;
   cout<<sumOfSquaresOfDigit(n);
   return 0;
}
