#include<iostream>
using namespace std;
int main()
{
   int a[5],count=0,digit;
   cout<<"Enter numbers:\n";
   for(int i=0;i<5;i++)
   cin>>a[i];
   cout<<"Enter digit to find:\n";
   cin>>digit;
   for(int i=0;i<5;i++)
   if(digit==a[i])
   count++;
   cout<<"Count :"<<count<<endl;
  
}
