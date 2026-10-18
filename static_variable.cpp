#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    static int count;

public:
    void getData() {
        cout << "Enter roll number: ";
        cin >> roll;
        count++;
    }

    void display () {
        cout << "Roll Number: " << roll << endl;
        cout << "Total students: " << count << endl;
    }
};

int Student :: count = 0;

int main () {
    Student s1, s2;

    s1.getData();
    s2.getData();

    s1.display();
    s2.display();
    
    return 0;
}