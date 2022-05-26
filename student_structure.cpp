#include <iostream>
using namespace std;

struct student //Structure
{
    char name[20];
    float marks;
    int roll_no;
};
int main()
{
    student s[100];
    int i, n, loc;
    float marks1;
    cout << "Enter the number of students: ";
    cin >> n;
    // For loop for entering the details
    for (i = 0; i < n; i++)
    {
        cout << "Enter the Name ,Rollno ,Marks of the student :" << i + 1;
        cin >> s[i].name >> s[i].roll_no >> s[i].marks;
    }
    marks1 = 0.0;
    loc = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i].marks > marks1)
        {
            loc = i;
            marks1 = s[i].marks;
        }
    }
    cout << "The student with maximum marks is " << s[loc].name << endl;

    return 0;
}