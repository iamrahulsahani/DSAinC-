#include<iostream>
using namespace std;


int main()
{
   string str="test123";
   int flag = 0;
   for(int i=0;str[i];i++)
   {
      if ( !((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9')) )
      {
         flag = 1;
         break;
      }
   }

   if(flag == 1)
   cout<<"Not Alphanumeric";
   else
   cout<<"Alphanumeric";
   return 0;
}

