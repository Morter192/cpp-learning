#include <iostream>

int main() {
    int score = 0;

    std::cout << "Введіть кількість балів" << '\n';
    std::cin >> score;

   if (score >= 0 && score <= 100) {
    // Бали допустимі. Тепер перевіряємо результат тесту.
    if (score >= 50) {
        std::cout << "Тест складено" << '\n';
    } else {
        std::cout << "Тест не складено" << '\n';
    }
} else {
    std::cout << "Помилка: бали мають бути від 0 до 100" << '\n';
}
return 0;
}