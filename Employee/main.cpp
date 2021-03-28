/******************************************
* A program to track details of Employees *
* Written by Titus Njiru                  *
* March 2021                              *
******************************************/
#include <iostream>

using namespace std;

//class definition
class Employee {
    // private data members of the class
    int id;
    string name;
    float salary;
    bool is_male;
    bool is_married;


    // public member functions declaration
public:
    Employee(); // default constructor
    Employee(const int i, const string n, const float s,const bool male, const bool married); // parameterized constructor
    void set_employee(const int i, const string n, const float s, const bool is_male, const bool is_married);
    void get_employee();
};

// Default constructor definition
// Used to set initial values for the employee
// does n't take any arguments

Employee::Employee(){
   id = 0;
   name = "No name";
   salary = 0;
}
/////////////////////////////////////////////////////////
// parameterized constructor definition                //
// used to initialize an object with the given values  //
// requires 3 arguments                                //
/////////////////////////////////////////////////////////

Employee::Employee(const int i, const string n, const float s,const bool male, const bool married) {
    id = i;
    name = n;
    salary = s;
    is_male = male;
    is_married = married;
}

// definition of set employee member function
// used to set the details of the employee
// requires 3 arguments

void Employee::set_employee(const int i, const string n, const float s,const bool male, const bool married){
    id = i;
    name = n;
    salary = s;
    is_male = male;
    is_married = married;
}

// definition of get employee member function
// used to output the details of an employee
// Does not take any arguments

void Employee::get_employee() {
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
    string gender = is_male ? "Male" : "Female" ;
    cout << "Gender: " << gender << endl;
    string marital_status = is_married ? "Married" : "Single";
    cout << "Marital status: " << marital_status << endl;
}

// supervisor class
class supervisor:public Employee {
    int sp_allowance;
public:
    int get_allowance();
    void set_allowance(int allowance);
};

int supervisor::get_allowance() {
    return sp_allowance;
}

void supervisor::set_allowance(const int allowance){
    sp_allowance = allowance;
}

// Hierarchical inheritance
// manager inherits from both employee and supervisor
class manager:public supervisor{
    int tr_allowance;
    int hs_allowance;
public:
    int get_tr_allowance();
    void set_tr_allowance(int tr);
    int get_hs_allowance();
    void set_hs_allowance(int hs);

};

int manager::get_tr_allowance() {
    return tr_allowance;
}
void manager::set_tr_allowance(int tr){
    tr_allowance = tr;
}
int manager::get_hs_allowance() {
    return hs_allowance;
}
void manager::set_hs_allowance(int hs) {
    hs_allowance = hs;
}

int main()
{
    supervisor sp1;
    sp1.set_employee(2001,"Steve Jobs",2000000,1,1);
    sp1.set_allowance(200000);

    manager mg1;
    mg1.set_employee(2002,"Elon Musk",5000000,1,1);
    mg1.set_allowance(500000);
    mg1.set_tr_allowance(200000);
    mg1.set_hs_allowance(100000);

    mg1.get_employee();
    cout << "Supervisor allowance: " << mg1.get_allowance() << endl;
    cout << "Travel Allowance: " << mg1.get_tr_allowance() << endl;
    cout << "House allowance: " << mg1.get_hs_allowance() << endl;

    return 0;
}
