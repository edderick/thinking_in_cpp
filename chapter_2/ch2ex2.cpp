#include <iostream>
#include <math.h>

int main() {
    double r; 

    std::cout << "Enter a radius: ";
    std::cin >> r;

    double area = M_PI * r * r; 

    std::cout << "The area is " << area
        << std::endl;

    return 0;
}
