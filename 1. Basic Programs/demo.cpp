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
