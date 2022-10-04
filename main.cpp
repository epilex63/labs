
// Created by GIGABYTE on 04.10.2022.

#include <iostream>

using namespace std;

//Task 1

int main() {
    int n,m;
    std::cout << "Print n and m" << std::endl;
    std::cout << "n=";
    std::cin >> n;
    std::cout << "m=";
    std::cin >> m;
    if (n == 0) {return 0;}
    if ((m % n) == 0) {
        std::cout << m/n;
    } else {
        std::cout << "n isn't a divider of m";
    }
    return 0;
}

//Task 2

int main() {
    double a, b, c, x, y;
    std::cout << "Print a, b, c" << std::endl;
    std::cout << "a=" << std::endl;
    std::cin >> a;
    std::cout << "b=" << std::endl;
    std::cin >> b;
    std::cout << "c=" << std::endl;
    std::cin >> c;
    if (a == 0) {
        std::cout << "Not parabola" << std::endl;
    } else {
        x = (-b) / (2 * a);
        y = a * x * x + b * x + c;
        std::cout << "Cords (" << x << "," << y << ")" << std::endl;
    }
    return 0;
}

