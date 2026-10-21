#include <iostream>

int main() {
    double a = 0;
    double b = 0;

    std::cout << "Введи два числа: ";
    std::cin >> a >> b;

    std::cout << "Середнє: " << (a + b) / 2.0 << '\n';

    return 0;
}