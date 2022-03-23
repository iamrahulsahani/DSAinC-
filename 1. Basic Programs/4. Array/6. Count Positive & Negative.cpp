#include<iostream>
using namespace std;
int main()
{
   int a[5],pos=0,neg=0;
   cout<<"Enter numbers:\n";
   for(int i=0;i<5;i++)
   cin>>a[i];

   for(int i=0;i<5;i++)
   if(a[i]>0)
   pos++;
   else
   neg++;
   cout<<"Positive :"<<pos<<endl;
   cout<<"Negative :"<<neg<<endl;
  
}
