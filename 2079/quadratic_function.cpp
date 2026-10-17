#include <iostream>
using namespace std;

class Quadratic 
{
private:
    double a, b, c;
public:
    Quadratic(double x = 0, double y = 0, double z = 0)
    {
        a = x;
        b = y;
        c = z;
    }
    double calculate(double x)
    {
        return a * x * x + b * x + c;
    }
};

int main () {
    Quadratic q(2, 3, 4);

    double x = 2;

    cout << "f(x) = " << q.calculate(x) << endl;

    return 0;
}