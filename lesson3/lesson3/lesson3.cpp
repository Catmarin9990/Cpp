#include <iostream>
#include <cmath>

int main()
{
    /*
    int x;
    double y = 0;

    std::cout << "enter x ";
    std::cin >> x;

    if (x > 0) {
        y = pow(x, 2);
    }
    else {
        y = 6;
    }

    std::cout << y;
    */
    /*
    int a, x;
    double y = 0;
    std::cout << "enter x, a";
    std::cin >> x >> a;

    if (x >= -5 && x <= 5) {
        y = pow(1 + pow(a, 2), 6);
    }
    else if (x > 5) {
        y = cos(pow(log10(abs(x)), 2)) + pow(x, 8);
    }

    else { y = a; }

    std::cout << "Patasxany " << y;
    */

    int a, b, c;
    double y = 0;

    std::cout << "enter a, b, c ";
    std::cin >> a >> b >> c;

    if (a + b < 7) {
        y = pow(1 / tan(pow(a, 2) + pow(b, 2) + c), 2);
    }
    else {
        y = pow(10, -7);
    }

    std::cout << "answer is " << y;
}









