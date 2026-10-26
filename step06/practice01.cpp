#include <iostream>
int main () {
    int number = 0;

std::cout << "Введіть одне число" << '\n';
std::cin >> number;
 if (number % 2 == 0) {
     std::cout << "Парне" << '\n';
} else {
     std::cout << "Непарне" << '\n';
}
 return 0;  
}