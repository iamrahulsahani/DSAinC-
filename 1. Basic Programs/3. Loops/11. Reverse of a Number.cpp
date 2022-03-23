#include<iostream>
using namespace std;
int main()
{
   int num,last,sum=0;
   cout<<"Enter a number:\n";
   cin>>num;
   while(num)
   {
      last = num%10;
      sum = sum*10+last;
      num = num/10;
   }
   cout<<"Reverse: "<<sum;

   

   


   



}
