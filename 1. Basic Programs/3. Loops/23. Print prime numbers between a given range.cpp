#include<iostream>
using namespace std;
int main()
{
   
   int x,y,flag;
   cout<<"Enter two numbers:\n";
   cin>>x>>y;
   for(int n=x;n<=y;n++)
   {
       flag=0;
       for(int i=2;i<=n/2;i++)
       {
           if(n%i==0)
           {
               flag=1;
               break;
           }
       }
       if(flag==0)
       cout<<n<<" ";

   }
}
