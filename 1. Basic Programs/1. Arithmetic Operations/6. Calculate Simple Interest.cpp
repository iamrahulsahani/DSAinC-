#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter Principal:\n";
    cin>>p;
    cout<<"Enter rate:\n";
    cin>>r;
    cout<<"Enter time:\n";
    cin>>t;
    si = (p*r*t)/100.0;
    cout<<"S.I. = "<<si;
}
