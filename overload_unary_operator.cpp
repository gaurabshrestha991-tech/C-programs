#include <iostream>
using namespace std;

class Student {
    int age;
public:
    void getData() {
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Age: " << age << endl;
    }

    void operator++() {
        ++age;
    }
};

int main () {
    Student s;

    s.getData();

    cout << "Before increment: " << endl;
    s.display();

    ++s;
    
    cout << "After increment: " << endl;
    s.display();
    return 0;
}