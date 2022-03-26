// A spy number is a number whose sum & product of it's digit is equal to each other
//eg. 1412
// sum = (1+4+1+2)
// product = (1*4*1*2)
// sum = product

#include<iostream>
using namespace std;


int main()
{
   int n=1412,sum=0,product=1,last;
   while(n)
   {
       last = n%10;
       sum += last;
       product *= last;
       n = n/10;
   }
   if(sum == product)
   cout<<"Spy Number";
   else
   cout<<"Not a Spy Number";

}