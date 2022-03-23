#include<iostream>
using namespace std;
int main()
{
   int num,digit,count=0,last;
   cout<<"Enter Number:\n";
   cin>>num;
   cout<<"Enter digit to count : \n";
   cin>>digit;
   while(num)
   {
      last = num%10;
      if (last == digit)
      count+=1;
      num = num/10;
   }
   cout<<digit<<" Occurs "<<count<<" times.";

   

   


   



}
