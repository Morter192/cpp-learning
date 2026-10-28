#include <iostream>
int main() {
int number = 2;
int n = 0;

 std::cout << "Введіть n: " << '\n';
    std::cin >> n;
 
while (number <= n) {
    std::cout << number << '\n';
    number = number + 2;

}


return 0;


}