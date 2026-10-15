#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base Class" << endl; 
    }
};

class Derived : public Base {
public:
    void display () override {
        cout << "Derived Class" << endl;
    }
};

int main () {
    Base *p;
    Derived d;

    p = &d;
    p->display();

    return 0;
}

