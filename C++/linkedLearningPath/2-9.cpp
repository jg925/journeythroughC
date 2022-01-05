// Learning C++
// Exercise 02_09
// Type Casting, by Eduardo Corpeño

#include <cstdint>
#include <iostream>

using namespace std;

float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main() {
    sgn = flt;
    unsgn = sgn;

    cout << "Float: " << flt << endl;
    cout << "int32: " << sgn << endl;
    cout << "uint32: " << unsgn << endl;

    int f = 100;
    int c;
    c = ((float)5 / 9.) * (f - 32);
    cout << endl;
    cout << "Fahrenheit: " << f << endl;
    cout << "Celsius: " << c << endl;

    double weight = 10.99;
    cout << endl;
    cout << "Float: " << weight << endl;
    cout << "Integer part: " << (int)weight << endl;
    cout << "Fractional part: " << (int)((weight - (int)weight) * 10000)
         << endl;

    return (0);
}
