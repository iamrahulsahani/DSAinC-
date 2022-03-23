#include<iostream>
using namespace std;
int main()
{
   int num,last,sum=0;
   cout<<"Enter number:\n";
   cin>>num;
   while(num)
   {
      last = num%10;
      sum+=last;
      num=num/10;
   }
   cout<<"sum : "<<sum;

   

   


   



}
