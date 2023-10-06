#include <iostream>
#include <cmath>

int main()
{
    //1
    /*
    int a, x, t;
    double y = 0;
    
    std::cout << "input a, x " << std::endl;
    std::cin >> a >> x;

    t = a + x;
    y = (pow(t, 3) / log10(t)) + 7 * sqrt(t);

    std::cout << "answer is " << y;
    *///////////////////////////////////////////////////////////////////////////////////////////////////////

    //2
    
    int a, b, x;
    double y = 0;

    std::cout << "input a, x, b " << std::endl;
    std::cin >> a >> x >> b;

    y = (a + b / pow(x, 5) + pow(x, 3)) - (sqrt(a + x) / 2 * a);

    std::cout << "answer is " << y;
    //////////////////////////////////////////////////////////////////////////////////////////////////////

    //3
    /*
    int b, x, s;
    double q;

    std::cout << "input b, x, s " << std::endl;
    std::cin >> b >> x >> s;

    q = (b * pow(x, 2) - s / exp(s * x) - 1) + exp(abs(x));

    std::cout << "answer is " << q;
    */////////////////////////////////////////////////////////////////////////////////////////////////////

    //4

    /*
    int b, x;
    double y;

    std::cout << "input b, x " << std::endl;
    std::cin >> b >> x;

    y = exp(0.2) + cbrt(abs(b - x));

    std::cout << "answer is " << y;
    *//////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
    
    //5

    int x;
    double z;

    std::cout << "input x " << std::endl;
    std::cin >> x;

    z = pow(sqrt(abs(exp(x) - sin((3.14 * x) / 2))), 1.0 / 4);

    std::cout << "answer is " << z;
    *////////////////////////////////////////////////////////////////////////////////////////////////////

    //6

    /*
    int a, x;
    double f;
    std::cout << "input x, a" << std::endl;
    std::cin >> x >> a;

    f = log10(a + pow(x, 5) + pow(sin(a / x), 2));

    std::cout << "answer is " << f;
    */////////////////////////////////////////////////////////////////////////////////////////////////

    //7

    /*
    int x, a, b;
    long double t;
    std::cout << "input x, a, b" << std::endl;
    std::cin >> x >> a >> b;

    t = 1 / (b * x) + a / pow(b, 2) * log10(abs(x / (a * x + b)));

    std::cout << "answer is " << t;
    */
    
    //////////////////////////////////////////////////////////////////////////////////

    //8

    
    //int y, b, t;
    //double X;
    //std::cout << "input y, b" << std::endl;
    //std::cin >> y >> b;
    //t = b + y;
    //X = pow(t, 3) + (sqrt(t) / y * 3.14) + exp(y);

    //std::cout << "answer is " << X;
    /////////////////////////////////////////////////////////////////////////////////

    //9
    
    //int x;
    //double z;
    //std::cout << "input x " << std::endl;
    //std::cin >> x;

    //z = pow(3, x * -1) * sqrt(x + pow(sqrt(abs(x)), 1.0 / 4));

    //std::cout << "answer is " << z;
    ////////////////////////////////////////////////////////////////////////////////

    //10
    
    /*
    int x;
    long double z;
    std::cout << "input x " << std::endl;
    std::cin >> x;

    z = (4.187 + pow(3.14, 2) + sin(x * 3.14) / 7) / exp(7) * ((3 * 3.14) / 4 + (x * 3.14));

    std::cout << "answer is " << z;
    */

}
