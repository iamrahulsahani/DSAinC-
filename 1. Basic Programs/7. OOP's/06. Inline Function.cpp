/* 
->Functions defined inside class it becomes inline function.
->To reduce or to eliminate the time of calls to small functions C++ provides inline function.
->The function call is replaced by the function definition bt coompliler so it reduced the overload of function calls.
->If we want to make any function inline which is outside the function ,we can use inline keyword.

*/

#include<iostream>
using namespace std;

class Test
{
    public:
    inline void fun();

};

void Test::fun()
{
    cout<<"inline";
}

int main()
{
    
Test t;
t.fun();
return 0;
}


