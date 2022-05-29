#include <iostream>
#include <string>
using namespace std;
class student
{

public:
    string name;
    int rollNo;
    int marks;
    int check;
    int a;
    int b;

    void getInfo()
    {
        cout << "\nEnter the name of Student:- ";
        cin >> name;
        cout << "\nEnter the Roll no of Student:- ";
        cin >> rollNo;
        cout << "\nEnter the Marks of the Student:- ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n\nName of the Student is:- " << name;
        cout << "\n\nRoll no of the Student is:- " << rollNo;
        cout << "\n\nMarks of the Student is:- " << marks;
    }

    void search()
    {
        cout << "\n\nEnter the Roll no of Student to search:- ";
        cin >> check;
        if (check == rollNo)
        {
            cout << "the details of the student are:- "
                 << "\nName: " << name << "\nRollno: " << rollNo << "\nMarks: " << marks << endl;
        }
    }

    void update()
    {
        cout << "\n\nEnter the Roll no of the student whose detail we want to update:- ";
        cin >> a;
        if (a == rollNo)
        {
            cout << "\n\nEnter updated details:-";
            cout << "\nEnter the name of Student:- ";
            cin >> name;
            cout << "\nEnter the Roll no of Student:- ";
            cin >> rollNo;
            cout << "\nEnter the Marks of the Student:- ";
            cin >> marks;

            cout << "\n\n=======UPDATED DETAILS OF THE STUDENT ARE:-=======";
            cout << "\n\nName of the Student is:- " << name;
            cout << "\n\nRoll no of the Student is:- " << rollNo;
            cout << "\n\nMarks of the Student is:- " << marks;
        }
    }

    void deletion()
    {
        cout << "\n\nEnter the Roll no of the student whose detail we want to delete:- ";
        cin >> b;
        if (b == rollNo)
        {
            name = rollNo = marks = 0;
        }

        cout << "\n\n=======UPDATED DETAILS OF THE STUDENT AFTER DELETION ARE ARE:-=======";
        cout << "\n\nName of the Student is:- " << name;
        cout << "\n\nRoll no of the Student is:- " << rollNo;
        cout << "\n\nMarks of the Student is:- " << marks;
     }
};

int main()
{
    student s[30];
    int n, i,c;
    cout << "Enter the number of students: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].getInfo();
    }

    cout << endl;    cout<<"display"<<endl;
    cout<<"search"<<endl;
    cout<<"update"<<endl;
    cout<<"deletion"<<endl<<endl;
    cout<<"Enter choice"<<endl;
    cin>>c;

    switch(c){

    case 1:
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
        break;
    case 2:

    for (i = 0; i < n; i++)
    {
        s[i].search();
    }
        break;

    case 3:


    for (i = 0; i < n; i++)
    {
        s[i].update();
    }
        break;

    case 4:

    for (i = 0; i < n; i++)
    {
        s[i].deletion();
    }
    }
    return 0;
}
