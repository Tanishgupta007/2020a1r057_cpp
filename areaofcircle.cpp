#include<iostream>
using namespace std;

class areaofcircle
{
    public:
    float radius, pi= 3.14,area;
    void input()
    {
        cout<<"enter the radius of the circle: "<<endl;
        cin>>radius;
    }
    void findarea()
    {
        area=pi*radius*radius;
    }
    void output()
    {
        cout<<"area of circle is "<<area<<endl;
    }
};
int main()
{
    areaofcircle a;
    a.input();
    a.findarea();
    a.output();
    return 0;
}