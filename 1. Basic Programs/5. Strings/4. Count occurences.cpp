#include<iostream>
using namespace std;

int main()
{
   string s;
   int count=0;
   cout<<"Enter a string:\n";
   cin>>s;
   char c;
   cout<<"Enter a character:\n";
   cin>>c;
   for(int i=0;s[i];i++)
   {
      if(c==s[i])
      count+=1;
   }
   cout<<"count :"<<count;
}
