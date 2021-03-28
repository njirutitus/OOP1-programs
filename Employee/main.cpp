#include <iostream>

using namespace std;

//class definition
class Employee {
    // private data members of the class
    int id;
    string name;
    float salary;

    // public member functions declaration
public:
    Employee();
    Employee(const int i, const string n, const float s);
    void set_employee(const int i, const string n, const float s);
    void get_employee();
};

// constructor definition
// Used to set initial values for the employe
// doesn't take any argumes

Employee::Employee(){
   id = 0;
   name = "No name";
   salary = 0;
}

// parameterized constructor definition
// used to initialize an object with the given values
// requires 3 arguments


Employee::Employee(const int i, const string n, const float s) {
    id = i;
    name = n;
    salary = s;
}

// definition of set_employee member function
// used to set the details of the employee
// requires 3 arguments

void Employee::set_employee(const int i, const string n, const float s){
    id = i;
    name = n;
    salary = s;
}

// definition of get_employee member function
// used to output the details of an employee
// doesn't take any arguments

void Employee::get_employee() {
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
}



int main()
{

    Employee emp1,emp2,emp3,emp4,emp5(1000,"Employee 5", 1000);
    Employee emp6(1000,"Employee 6", 1000); // Object creation
    emp1.set_employee(1002, "Bill Gates", 20000000);
    emp2.set_employee(1003, "Steve Jobs", 30000000);
    emp3.set_employee(1004, "Elon Musk", 10000000);
    emp6.set_employee(1006, "Eric mutua", 500000);

    emp1.get_employee();
    emp2.get_employee();
    emp3.get_employee();
    emp4.get_employee();
    emp5.get_employee();
    emp6.get_employee();

    return 0;
}
