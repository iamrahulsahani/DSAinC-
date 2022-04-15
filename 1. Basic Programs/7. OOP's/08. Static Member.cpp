//static member will be created only once.
//static member will be created even when the object is not created.
//it is defined outside the class.
//it belongs to class not to object.

//-----------------------when class variable is private----------------------------

#include<iostream>
using namespace std;

class Account
{
    private:
        int balance;      //instance member variable
        static float roi; //Static Member variable or Class variable
    public:
        void setBalance(int b)
        {
            balance=b;
        }

};

float Account:: roi=3.5f;


int main()
{
    
Account a1;
return 0;
}


//-----------------when class variable is public----------------------------
#include<iostream>
using namespace std;

class Account
{
    private:
        int balance;      //instance member variable
    public:
        static float roi;
        void setBalance(int b)
        {
            balance=b;
        }

};

int main()
{

    Account::roi=3.5f;  
}

