#include<iostream>
using namespace std;
int main()
{
   
   int num,sum,last;
   for(int n=1;n<=1000;n++)
   {
       sum = 0;
       num = n;
       while(num)
       {
           last = num%10;
           sum += last*last*last;
           num=num/10;
       }
       if(n == sum)
       cout<<sum<<" ";
   }
}
