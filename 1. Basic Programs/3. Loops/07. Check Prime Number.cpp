#include<iostream>
using namespace std;
int main()
{
   int n,flag=1;
   cout<<"Enter a number:\n";
   cin>>n;
   for(int i=2;i<=n/2;i++)
   if(n%i==0)
   {
      flag = 0;
      break;
   }
   if (flag==1)     //or      //check if(i>n/2) it means it is prime number
   cout<<"Prime";             //that's why i got incremented upto the last iteration
   else                       //flag is not required in this logic
   cout<<"Not Prime";


   



}
