#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter a character:\n";
   cin>>c;
   if (c>='a' && c<='z')
   cout<<"Lowercase";
   else if(c>='A' && c<='Z')
   cout<<"Uppercase";
   else
   cout<<"Not an Alphabet";
}
