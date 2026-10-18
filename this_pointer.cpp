#include <iostream>
using namespace std;

class Student {
private:
    int roll;
public: 
    void setData(int roll) {
        this->roll = roll;
    }

    void display() {

        cout << "Roll : " << roll <<  endl;
    }
};

int main () {

    Student r1;

    r1.setData(101);
    r1.display();

    return 0;
}