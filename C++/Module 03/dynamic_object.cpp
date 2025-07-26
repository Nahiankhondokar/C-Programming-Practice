#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 *  Static class 
 *  Dynamic class
 * 
 * Rakib Ahmend
    20 4.5
    Shakib Ahmend
    20 4.5
 */
class Student {
    public :
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte
};

Student* fun()
{
    // Student b; // static class
    // cin.getline(b.name, 100); // with space
    // cin >> b.roll >> b.gpa;
    // return b;  // work as like variable

    Student* a = new Student; // dynamic class
    cin.getline(a->name, 100); // with space
    cin >> a->roll >> a->gpa;
    return a; // work like pointer
    
}

int main()
{
    Student* obj = fun(); // 
    // cout << obj.name << " " << obj.roll << " " << obj.gpa << endl; // static class

    cout << obj->name << " " << obj->roll << " " << obj->gpa << endl; // dynamic class

   return 0;
}