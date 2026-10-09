#include <iostream>
#include <iomanip>

int main() {
    int totalSeconds = 0;
    std::cout << "Введите количество секунд: ";
    std::cin >> totalSeconds;

    if (totalSeconds < 0) {
        std::cout << "Ошибка: число должно быть неотрицательным.\n";
        return 1;
    }

    int hours   = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    std::cout << std::setfill('0')
              << std::setw(2) << hours   << ":"
              << std::setw(2) << minutes << ":"
              << std::setw(2) << seconds << "\n";

    // Дополнительное задание: обратное преобразование
    int h = 0, m = 0, s = 0;
    char colon1 = 0, colon2 = 0;

    std::cout << "Введите время в формате ЧЧ:ММ:СС: ";
    std::cin >> h >> colon1 >> m >> colon2 >> s;

    int back = h * 3600 + m * 60 + s;
    std::cout << "Всего секунд: " << back << "\n";

    return 0;
}