#include <iostream>
   int main() {
    double price = 2.5;

    int quantity = 4;
    double total = price * quantity;

       std::cout << "Вартість: " << total << '\n';
       quantity = 6;
total = price * quantity;
       std::cout << "Вартість: " << total << '\n';
         
   int totalMinutes = 59;
       int hours = totalMinutes / 60; 
       int minutes = totalMinutes % 60;

       std::cout << "Години: " << hours << '\n';
       std::cout << "Хвилини: " << minutes << '\n';

       bool isReady = true;
       std::cout << isReady << '\n';
       isReady = false;
std::cout << isReady << '\n';
       char letter = 'B';
       std::cout << letter << '\n';
       letter = 'C';
       std::cout << letter << '\n'; 

return 0;
}   