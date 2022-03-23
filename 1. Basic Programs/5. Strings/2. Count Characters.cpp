#include<iostream>
using namespace std;
int main()
{
   string s;
   int c=0;
   cout<<"Enter a string:\n";
   cin>>s;
   for(int i=0;s[i];i++)
   c+=1;
   cout<<"Total Count: "<<c;

}
