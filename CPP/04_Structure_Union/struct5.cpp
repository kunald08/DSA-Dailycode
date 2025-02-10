#include <iostream>
using namespace std;

// Structure definition for Student
struct Student
{
    int rollNo;     // Roll number of the student
    string name;    // Name of the student
    string address; // Address of the student
    int age;        // Age of the student
    string section; // Section of the student
};

// Function to print Student details by reference
void print(Student &x)
{
    cout << x.rollNo << " "
         << x.name << " "
         << x.address << " "
         << x.section << " ";
}

// Function to print Student details by pointer
void print(Student *x)
{
    cout << x->rollNo << " "
         << x->name << " "
         << x->address << " "
         << x->section << " ";
}

int main()
{
    // Create a Student object and initialize its members
    Student s{50, "kunal", "pandhurna", 20, "It-A"};

    // Call the print function by passing the Student object by reference
    print(s);

    // Call the print function by passing the address of the Student object (pointer)
    print(&s);

    return 0;
}
