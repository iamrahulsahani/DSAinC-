#include<iostream>
using namespace std;

int main()
{
   string s;
   cout<<"Enter a string:\n";
   cin>>s;
   for(int i=0;s[i];i++)
   {
      if(s[i]>='a' && s[i]<='z')
      s[i] = s[i]-32;
      else if(s[i]>='A' && s[i]<='Z')
      s[i] = s[i]+32;
   }
   cout<<s;
}
