#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        int imag;
    public:
        int input_val()
        {
            cout<<"Enter the values of real and imaginary part: "<<endl;
            cin>>real>>imag;
        }
        int output_val()
        {
            cout<<"The entered values of real and imaginary part are "<<endl;
            cout<<real<<" + i "<<imag<<endl;
        }
        complex add (complex c1, complex c2)
        {
            complex c3;
            c3.real= c1.real+c2.real;
            c3.imag=c1.imag+c2.imag;
            cout<<"The sum of the complex numbers are: "<<endl;
            cout<<c3.real<<" + i "<<c3.imag<<endl;
        }
};

    int main()
    {
        complex c1,c2,c3;
        c1.input_val();
        c2.input_val();
        c1.output_val();
        c2.output_val();
        c3.add(c1,c2);
        return 0;
    }