#include <iostream>
#include <cmath>

float a, b, alf, s;

void plo() {
    const double PI = acos(-1.0);
    s = 0.5 * (std::pow(b, 2) - std::pow(a, 2)) * tan(alf * PI / 180);
}

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
