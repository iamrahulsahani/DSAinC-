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

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    
Rectangle r;
Rectangle *p;
p = &r;
p->length = 5;
p->breadth = 10;
cout<<p->area()<<endl;
cout<<p->perimeter();
return 0;
}

// . is used to access memebers of class with objects.
// -> is used to access members with objects using pointer.