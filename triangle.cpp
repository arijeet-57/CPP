#include <iostream>
#include <cmath> //include this for easy functioning of the math functions;

int main() {
    using namespace std;

    double a, b, hy;

    cout<<"Enter the height of the triangle: ";
    cin>>a;

    cout<<"Enter the base of the triangle: ";
    cin>>b;

    a = pow(a, 2);
    b = pow(b, 2);
    hy = sqrt(a + b);

    cout<<"The hypotenuse of the triangle is: " << hy << "cm";

    return 0;
}