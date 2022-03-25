#include<iostream>
using namespace std;
int main()
{
   int a=54,b=27;
   for(int i=2;i<=a*b;i++)
   {
       if(i%a==0 && i%b==0)
       {
           cout<<i;
           break;
       }
   }

}

//--------------------improved logic------------------------------
/*
int main()
{
   int a=6,b=7,larger;
   larger = (a>b)?a:b;
   for(int i=larger;i<=a*b;i+=larger)
   {
       if(i%a==0 && i%b==0)
       {
           cout<<i;
           break;
       }
   }
}
*/