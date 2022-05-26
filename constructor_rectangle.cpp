#include<iostream>
using namespace std;

class rectangle
{
    private:
    float length{0},breadth{0};
    public:
    rectangle(){};
    rectangle(float i):
    length(i),breadth(i){}

    rectangle(float a,float b):
    length(a),breadth(b){}

    void calculate()
    {
        cout<<"Area of rectangle :"<<length*breadth<<endl;
    }
};

int main()
{
    rectangle r1;
    rectangle r2{10};
    rectangle r3{15,45};

    r1.calculate();
    r2.calculate();
    r3.calculate();
    return 0;
}