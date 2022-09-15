#include <iostream>

void plo();

float s, a, b, alf;

int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    std::cout << "Введите два основания (меньшее, затем большее)\n";
    std::cin >> a >> b;
    std::cout << "Введите угол при большем основании\n";
    std::cin >> alf;
    plo();
    std::cout << "Плошадь равна: " << s;
    return 0;
}