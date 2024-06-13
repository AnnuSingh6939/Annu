#include<iostream>
using namespace std;

class Employee 
{
public:
    int empID;
    int empSalary;

    // Default constructor
    Employee() 
    {
      empID = 45;
      empSalary = 567;
    }

    // Parameterized constructor with one parameter
    Employee(int id)
     {
       this->empID = id;
    }

    // Parameterized constructor with two parameters
    Employee(int id, int salary) 
    {
        this->empID = id;
        this->empSalary = salary;
    }
    //copy constructor
    Employee(Employee &emp)
    {
        empID = emp.empID;
        empSalary = emp.empID;
    }

    // Function to display employee details
    void displayID()
     {
        cout << "Employee ID is " << empID << " and salary is: " << empSalary << endl;
    }

    // Destructor
    ~Employee() 
    {
        cout << "Destructor called" << endl;
    }
};

int main()
 {
   // Employee e1;
   // e1.displayID();
    Employee e2(100);
    e2.displayID();
   // Employee e3(200, 1000);

    Employee e4(e2);
    cout<<e4.empID<<endl;
    cout<<e4.empSalary<<endl;
    //e3.displayID();

    return 0;
}