#include<iostream>
using namespace std;
int main()
{
   int x,y,pow=1;
   cout<<"Enter x:\n";
   cin>>x;
   cout<<"Enter y:\n";
   cin>>y;
   for(int i = 1;i<=y;i++)
   pow *= x;
   cout<<pow;
}
