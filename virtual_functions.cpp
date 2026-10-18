#include <iostream>
using namespace std;

class Employee {
public:
    virtual double CalculateSalary() {
        return 0;
    }
};

class HourlyEmployee : public Employee {
private:
    double hours, rate;
public:
    HourlyEmployee(double h, double r) {
        hours = h;
        rate = r;
    }

    double CalculateSalary() override {
        return hours * rate;
    }
};

class SalariedEmployee : public Employee {
private:
    double salary;
public:
    SalariedEmployee(double s) {
        salary = s;
    }

    double CalculateSalary() override {
        return salary;
    }
};

int main () {

    HourlyEmployee h(40, 200);
    SalariedEmployee s(30000);

    cout << "Hourly Employee Salary: Rs. "
         << h.CalculateSalary() << endl;

    cout << "Salaried Employee Salary: Rs. "
         << s.CalculateSalary() << endl;
    return 0;
}