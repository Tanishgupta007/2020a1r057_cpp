#include<iostream>
using namespace std;

class test
{
    public:
    int factorial(int number)
    {
        int i,fact=1;
        for(i=1;i<=number;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
};
int main()
{
    int number,fact=1;
    cout<<"Enter the number: ";
    cin>>number;
    test dy;
    fact = dy.factorial(number);
    cout<<"factorial of the number is "<<fact;
    return 0;
}