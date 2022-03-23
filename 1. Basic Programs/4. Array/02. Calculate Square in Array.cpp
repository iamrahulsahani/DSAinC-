#include<iostream>
using namespace std;
int main()
{
   int a[5];
   cout<<"Enter numbers\n";
   for(int i=0;i<5;i++)
   cin>>a[i];
   cout<<"Squared Elements:\n";
   for(int i=0;i<5;i++)
   cout<<a[i]*a[i]<<endl;
}
