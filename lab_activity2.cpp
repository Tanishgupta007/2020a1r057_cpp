#include <iostream>
#include <string>
using namespace std;

// Access specifiers define how the members (attributes and methods) of a class can be accessed. By default, all members of a class are private if you don't specify an access specifier:
class student
{
private:            // This is private access specifier whose members cannot be accessed (or viewed) from outside the class.
    string name;    /*               These are all                   */
    int roll_no;    /*        private attribute defined in           */
    string address; /*       side the private access specifier       */
    int marks;

public:   // This is public access specifier whose members are accessible from outside the class.


    student(string nam, int roll, string add, int mar) // This is a parametrized constructor.
    {
        name = nam;     /*               These are all                */
        roll_no = roll; /*        public  attribute defined in        */
        address = add;  /*       side the public access specifier     */
        marks = mar;
    }

    void display()
    {
        cout << "\n\n--------------- STUDENT INFO IS:----------------";
        cout << "\nName is:-  " << name;
        cout << "\nRoll no is:-  " << roll_no;
        cout << "\nAddress is:-  " << address;
        cout << "\nMarks is:-  " << marks;
    }

    ~student() // Student destructor
    {
        cout << "\n\n\n======Have a Nice Day======";
    }
};

class course
{
private:
    string course_name;
    int course_code;
    string faculty_name;
    string student_enrolled;

public:
    course(string c_name, int c_code, string fac_name, string stu_enrolled) // This is a parametrized constructor.
    {
        course_name = c_name;
        course_code = c_code;
        faculty_name = fac_name;
        student_enrolled = stu_enrolled;
    }

    void disp()
    {
        cout << "\n\n-------------------COURSE INFO IS:------------------";
        cout << "\n Course Name is:-  " << course_name;
        cout << "\n Course code is:-  " << course_code;
        cout << "\n Faculty name is:- " << faculty_name;
        cout << "\n Student enrolled is:-  " << student_enrolled;
    }

    ~course() // Course destructor.
    {
    }
};

int main()
{
    student s1("Tanish Gupta", 01, "Jammu", 100); // student constructor is called for student 1 and we are  passing values to constructor.
    s1.display();


    student s2("Yuvraj Khajauria", 02, "Katra", 90); // student constructor is called for student 2 and we are passing values to constructor.
    s2.display();


    course c1("Object oriented Programming with c++ Lab", 411, "Mr.Anil Gupta", "Tanish Gupta"); // course constructor is called for student 1 and we are passing values to constructor.
    c1.disp();


    course c2("Object oriented Programming with c++ Lab", 411, "Mr.Anil Gupta", "Yuvraj Khajuria"); // course constructor is called for student 2 and we are passing values to constructor.
    c2.disp();
    return 0;
}
//Tanish Gupta
//2020a1r057
