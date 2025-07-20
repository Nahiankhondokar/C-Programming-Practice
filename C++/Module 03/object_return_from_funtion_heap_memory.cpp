#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 *  Object reurn from Heap memory as pointer
 *  from stack memory i can't get data in main fun.
 *  from heap memory i can get data.
 */
class Student {
    public :
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte

    Student(int roll, double gpa)
    {
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student* fun()
{
    Student* p = new Student(11, 4.56); // Heap memory
    // Student nahian = Student(12, 3.56); // Stack memory
    // Student * p = &nahian;
    return p;
}


int main()
{
    Student* obj = fun();
    cout << obj->roll << " " << obj->gpa;
    return 0;
}


