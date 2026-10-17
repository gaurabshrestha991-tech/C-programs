#include <iostream>
using namespace std;

class A 
{
private:
    int x = 10;

    friend class B;
};

class B 
{
public:
    void display(A obj) {
        cout << "Value of x = " << obj.x;
    }
};

int main () {
    A obj;
    B b;
    b.display(obj);
    return 0;
}