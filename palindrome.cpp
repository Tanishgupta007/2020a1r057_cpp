#include<iostream>
using namespace std;

class p
{
    private:
        int n,num;
    public:
        void input()
        {
            cout<<"Enter the number: ";
            cin>>num;
            n=num;
        }
        void palindrome()
        {
            int rev=0,digit;
            while (num !=0)
            {
                digit=num%10;
                rev=(rev*10)+digit;
                num=num/10;
            }
            cout<<"The reverse of a number is "<<rev<<endl;
            if(n == rev){
                cout<<"The number is a palindrome.";
            }
            else{
                cout<<"The number is not a palindrome.";
            }
        }
};
int main(){
    p ob;
    ob.input();
    ob.palindrome();
    return 0;

}