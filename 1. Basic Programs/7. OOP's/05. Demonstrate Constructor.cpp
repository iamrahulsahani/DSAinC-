//Constructor : Function with no return type & same name of class.

/*

Types of constructor:
->Default constructor.
->parameterized constructor.
->Non-parameterized constructor.
->Copy constructor.
->Deep copy constructor.



*/

#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:

    Rectangle() //non parameterized
    {
        length=0;
        breadth=0;
    }

    Rectangle(int l, int b) //parameterized
    {
        setLength(l);
        setLength(b);
    }

    Rectangle(Rectangle &r) //Copy Constructor
    {
        length = r.length;
        breadth = r.breadth;
    }

    void setLength( int l)
    {
        length=l;
    }


};

int main()
{
    
Rectangle r;

return 0;
}
