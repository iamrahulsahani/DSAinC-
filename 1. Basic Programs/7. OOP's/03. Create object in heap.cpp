#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

};

int main()
{
    
Rectangle *p;
p = new Rectangle; //or  p = new Rectangle();
p->length = 5;
p->breadth = 10;
cout<<p->area();
return 0;
}

// Note : Rectangle r;                     [in stack]
//        Rectangle *p = new Rectangle;    [in heap]