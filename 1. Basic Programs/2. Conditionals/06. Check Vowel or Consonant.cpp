#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character:\n";
    cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    cout<<"Vowel";
    else
    cout<<"Consonant";
}
