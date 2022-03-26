#include<iostream>
using namespace std;
int main()
{
   cout<<"Enter a number:\n";
   int n,num,sum=0,last;
   cin>>n;
   num = n;
   while(n)
   {
       last = n%10;
       sum += last*last*last;
       n = n/10;
   }
   if (num==sum)
   cout<<"Armstrong Number";
   else
   cout<<"Not a Armstrong Number";
   
}
