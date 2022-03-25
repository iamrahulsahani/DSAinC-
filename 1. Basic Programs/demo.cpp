#include<iostream>
using namespace std;
int main()
{
   int a=17,b=34,hcf,larger;
   larger = (a>b)?a:b;
   for(int i=larger;i>=1;i--)
   {
       if(a%i==0 && b%i==0)
       {
           hcf=i;
           break;
       }
   }
   cout<<hcf;
}
