#include<iostream>
using namespace std;


int main()
{
   int n=6,a[8]={},r,i=0;
   while(n)
   {
      r = n%2;
      a[i++] = r;
      n = n/2;
   }
   for(int k=7;k>=0;k--)
   {
      cout<<a[k];
   }
   return 0;
}

