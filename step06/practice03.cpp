#include <iostream>
int main() {
   int level = 0;
   int coin = 0;
   std::cout << "Введіть рівень і кількість монет" << '\n';
   std::cin >> level >> coin;
 
 if (level >= 10 && coin >= 100) {
    std::cout << "Доступ дозволено" << '\n';
} else {
    std::cout << "Доступ заборонено" << '\n';

}  
return 0; 
}