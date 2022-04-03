// The Keyword template is used to define function/class template
// It is a way to make function/class generalized.

//syntax - template <class a, class b, class c....>

//how to use template: 
// template_name<data type> object_name;
// e.g: list<int> l;

//---------------------Template Example-------------------------------------
#include<iostream>
using namespace std;

template <class num>
num big(num a, num b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
 
    cout<<big(3.6,3.1)<<endl;
    cout<<big(3,1);
    return 0;

}
