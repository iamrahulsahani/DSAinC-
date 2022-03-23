#include<iostream>
using namespace std;
int main()
{
   int a[5],sum=0;
   float avg;
   cout<<"Enter numbers:\n";
   for(int i=0;i<5;i++)
   cin>>a[i];
   cout<<"Sum & Average:\n";
   for(int i=0;i<5;i++)
   sum+=a[i];
   cout<<"sum :"<<sum<<endl;
   cout<<"average :"<<sum/5.0;
}
