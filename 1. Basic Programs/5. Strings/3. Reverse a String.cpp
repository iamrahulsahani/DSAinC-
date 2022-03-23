#include<iostream>
using namespace std;
// // ----------------------------using another string---------------------------------
int main()
{
   string s,str="";
   cout<<"Enter a string:\n";
   cin>>s;
   for(int i=s.length()-1;i>=0;i--)
   {
      str+= s[i];
   }
   cout<<str;
}
// ----------------------------inbuilt  function---------------------------------
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cout<<"Enter a string:\n";
   cin>>s;
   reverse(s.begin(), s.end());
   cout<<s;
}
*/
