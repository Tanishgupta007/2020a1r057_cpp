#include<iostream>
using namespace std;

class picture
{
    int p1,p2;
    public:
    picture(int x,int y)
    {
        p1=x;
        p2=y;
        cout<<"The orginal values are: "<<endl<<p1<<endl<<p2<<endl;
    }
    picture(picture &p0)
    {
        p1=p0.p1;
        p2=p0.p2;
        cout<<"The copied values are: "<<endl<<p1<<endl<<p2;
    }
};
int main()
{
    picture p(5,10);
    picture pc(p);
    return 0;
}