#include <iostream>
#include <cmath>


int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    const double PI = acos(-1.0);
    float a, b, alf;
    std::cout << "Введите два основания (меньшее, затем большее)\n";
    std::cin >> a >> b;
    std::cout << "Введите угол при большем основании\n";
    std::cin >> alf;
    float s = 0.5 * (std::pow(b, 2) - std::pow(a, 2)) * tan(alf * PI / 180);
    std::cout << "Плошадь равна: " << s;
    return 0;
}