#include <iostream>
using namespace std;

class Employee
{
private:
    int Eid;
    string Ename;
    float salary;
public:
    void read() {
        cout << "Enter Employee Id: ";
        cin >> Eid;

        cout << "Enter Employee Name: ";
        cin >> Ename;

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Employee ID:  " << Eid << endl;
        cout << "Employee Name: " << Ename << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Typist : public Employee {
private:
    int speed;
public:
    void read() {
        Employee::read();

        cout << "Enter Typing Speed (Words per minute): ";
        cin >> speed;
    }
    void display()
    {
        Employee::display();

        cout << "Typing Speed: " << speed
             << " words per minute" << endl;
    }
};

int main () {
    Typist t1, t2;

    cout << "Enter details of first typist: " << endl;
    t1.read();

    cout << "\nEnter details of second typist:" << endl;
    t2.read();

    cout << "\nDetails of first typist:" << endl;
    t1.display();

    cout << "\nDetails of second typist:" << endl;
    t2.display();

    return 0;
}
