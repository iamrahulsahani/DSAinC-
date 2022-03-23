#include<iostream>
using namespace std;
int main()
{
   int a[5],largest;
   cout<<"Enter numbers:\n";
   for(int i=0;i<5;i++)
   cin>>a[i];
   largest=a[0];
   for(int i=0;i<5;i++)
   if(a[i]>largest)
   largest = a[i];
   cout<<"largest :"<<largest<<endl;
  
}
