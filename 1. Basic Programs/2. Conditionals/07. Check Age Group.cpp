#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"Enter age:\n";
   cin>>age;
   if(age<18)
   cout<<"Child";
   else if(age>18 && age<60)
   cout<<"Young";
   else if(age>60)
   cout<<"Old";
}
