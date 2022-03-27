#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:

    void setLength( int l)
    {
        length=l;
    }

    int getLength()
    {
        return length;
    }

};

int main()
{
    
Rectangle r;
r.setLength(10);
cout<<r.getLength();
return 0;
}
