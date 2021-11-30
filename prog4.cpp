#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, calculation, func1, func2;

    cout << "Enter coefficients for a, b, and c: ";
    cin >> a >> b >> c;
    calculation = b*b - 4*a*c;

    if ((calculation > 0) && (2 * a != 0)) {
        func1 = (-b + sqrt(calculation)) / (2*a);
        func2 = (-b - sqrt(calculation)) / (2*a);

        cout << "The roots are real." << endl;
        cout << "func1 = " << func1 << endl;
        cout << "func2 = " << func2 << endl;
    } else {
        cout << "There is an imaginary root.";
    }
}