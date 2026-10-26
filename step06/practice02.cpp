#include <iostream>
int main () {
double a = 0;
double b = 0;

std::cout << "Введи два числа: " << '\n';
    std::cin >> a >> b;

if (a <= 0 || b <= 0) {
    std::cout << "Помилка" << '\n';
} else {
    std::cout << "Площа прямокутника: " << a * b << '\n';

}
 return 0;
}