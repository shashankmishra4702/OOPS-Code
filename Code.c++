#include <bits/stdc++.h>
using namespace std;

// class Teacher
// {
// public:
//     // Constructor --> Non parameterized
//     Teacher()
//     {
//         cout << "Hi, i am a Constructor" << endl;
//     }
//     // Parameterized
//     Teacher(string a, string b)
//     {
//         name = a;
//         subject = b;
//     }
//     string name;
//     string deptnum;
//     string subject;
//     double salary;

//     void setdept(string newdept)
//     {
//         deptnum = newdept;
//     }
// };

class Account
{
    double balance;
    string password;

public:
    string id;
    string username;
};

// Need of Deep and Shallow copy
class Student
{
    string name;
    double cgpa;

    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }
    void print()
    {
        cout << "Name:" << name << endl;
        cout << "Cgpa:" << cgpa << endl;
    }
};

int main()
{
    // Teacher t1;
    // Teacher t2;
    // t1.name = "Shashank";
    // t1.deptnum = "Physics";
    // t1.setdept("Chemistry");
    // Teacher t3("Shashank", "Maths");
    // cout << t1.name << " " << t1.deptnum << endl;
    // cout << t3.name << " " << t3.subject << endl;

    //     Student s1("Shashank",8.2);
    //     Student s2(s1);
}