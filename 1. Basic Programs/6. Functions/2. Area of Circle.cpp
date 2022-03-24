#include<iostream>
using namespace std;

float areaOfCircle(int r)
{
   float pi=3.14;
   return pi*r*r;
}

int main()
{
   int r=5;
   cout<<areaOfCircle(r);
   return 0;
}
