#include <iostream>

int main() {
    double a = 0;
    double b = 0;

    std::cout << "Введи два числа: ";
    std::cin >> a >> b;

 if (a > b) {
    std::cout << "Число: " << a << '\n';
} else if (b > a) {
    std::cout << "Число: " << b << '\n';
} else {
    std::cout << "Рівно" << '\n';
}

    return 0;
}