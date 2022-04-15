//It is a pointer to the same/current object.
#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length, int breadth)
        {
            this->length=length;
            this->breadth=breadth;
        }

};


int main()
{
    
    Rectangle r(10,20);

return 0;
}
