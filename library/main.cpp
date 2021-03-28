#include <iostream>

using namespace std;

class Book {
    string title;
    string ISBN;
    int copies{};
    string author;
    static bool condition;
public:
    void get_data(){
        cout<<"Title: "<<title<<endl;
        cout<<"ISBN: "<<ISBN<<endl;
        cout<<"Copies: " << copies <<endl;
        cout<<"Author: " << author << endl;
    }

    void set_condition(const bool cond){
        condition = cond;
    }

    void get_condition(){
        cout << condition << endl;
    }

    void set_data(const string t,const string I,const int c,const string a){
        title = t;
        ISBN = I;
        copies = c;
        author = a;
    }
};

class User {
    string name;
    string gender;
    int age;
    bool is_staff;
    const string password = "admin";
    bool is_logged_in {false};
public:
     void set_user(const string n, const string g, const int a, const bool st){
        name = n;
        gender = g;
        age = a;
        is_staff = st;
     }

     void login(string pass) {
        if ( pass == password) {
            is_logged_in = true;
        }
        else {
            is_logged_in = false;
        }
     }

     bool check_login(){
        if(is_logged_in) return true;
        else return false;
     }

     void get_user(){

        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        cout << "Is staff? " << is_staff << endl;
     }

};

int main()
{
    Book cpp,java;
    cpp.set_data("Cpp reference","6789393",3,"Herber schildt");
    cpp.set_condition(false);
    cpp.get_condition();
    cpp.get_data();


    java.set_data("Java complete reference","6789393",3,"Herber schildt");
    java.get_data();

    User bill;

    bill.set_user("Bill Gates", "male", 56, true);
    bill.login("admin");
    cout << "Logged in? " << bill.check_login() << endl;
    bill.get_user();

    return 0;
}
