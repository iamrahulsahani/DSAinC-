// A strong number is a number whose sum of the factorial of it's digit
// is equal to the original number
//eg. 145 = !1 + !4 + !5

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}

int main()
{
   int n,sum=0,num=145,last;
   n = num;
   while(n)
   {
       last = n%10;
       sum += fact(last);
       n = n/10;
   }
   if(num==sum)
   cout<<"Strong Number";
   else
   cout<<"Not a strong Number";

}