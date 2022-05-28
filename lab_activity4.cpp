
#include <iostream>
using namespace std;

class student
{
    private:
    char name[30];
    int rollno;
    float marks;

    public:
    int x,j,t;
    void input(){
        cin>>name>>rollno>>marks;
    }
    void find_rl(){
        cout<<"Enter the roll no of the student to find the details of: "<<endl;
        cin>>x;
        if(x == rollno)
        {
            cout<<"The student details are: "<<"Name: "<<name<<" Rollno: "<<rollno<<" Marks: "<<marks<<endl;
        }
    }
};
int main(){
    student s[10];
    int i,n;
    cout<<"Enter the number of students: "<<endl;
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        cout<<"Enter the name ,roll no and marks of student "<<i<<" "<<endl;
        s[i].input();
    }
    for (i=1; i <= n; i++)
    {
        s[i].find_rl();
    }

    return 0;
}
