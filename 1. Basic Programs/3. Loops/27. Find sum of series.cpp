// 1 + (1+2) + (1+2+3) + ....... +(1+2+3+4.....n)

#include<iostream>
using namespace std;

int main()
{
   
   int t,n=3,s,sum=0;
   for(t=1;t<=n;t++)
   {
       s=0;
       for(int i=1;i<=t;i++)
       {
           s+=i;
       }
       sum += s;
   }

    cout<<sum;
   
}