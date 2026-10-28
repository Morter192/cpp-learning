#include <iostream>

int main() {
    int number = 1;
    int n = 0;

    std::cout << "Введіть n: " << '\n';
    std::cin >> n;

    number = n;

while (number >= 1) {
    std::cout << number << '\n';
    number = number - 1;
}

   

    return 0;
}