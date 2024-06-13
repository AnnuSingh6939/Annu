#include <iostream>
#include <string>

using namespace std;

class Student 
{
private:
    string name;
    int id;

public:
    // Default constructor
    Student() 
    {
        name = "Unknown";
        id = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Student(string studentName, int studentId) 
    {
        name = studentName;
        id = studentId;
        cout << "Parameterized constructor called" << endl;
    }

    // Function to display student details
    void display() const
     {
        cout << "Student Name: " << name << ", Student ID: " << id << endl;
    }
};

int main() 
{
    Student student1;
    student1.display();
    Student student2("Annu", 12345);
    student2.display();

    return 0;
}