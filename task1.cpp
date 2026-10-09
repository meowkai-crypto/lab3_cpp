#include <iostream>
#include <string>
#include <typeinfo>

int main() {
    int integer = 0;
    double decimal = 0.0;
    std::string text;

    std::cout << "Введите целое число: ";
    std::cin >> integer;

    std::cout << "Введите дробное число: ";
    std::cin >> decimal;

    std::cin.ignore(); 

    std::cout << "Введите строку: ";
    std::getline(std::cin, text);

    std::cout << "Значение: " << integer
              << ", тип: " << typeid(integer).name() << "\n";
    std::cout << "Значение: " << decimal
              << ", тип: " << typeid(decimal).name() << "\n";
    std::cout << "Значение: " << text
              << ", тип: " << typeid(text).name() << "\n";

    return 0;
}