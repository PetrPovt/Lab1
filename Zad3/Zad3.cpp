#include <iostream>
#include <cmath>

float plo(float, float, float);

int main() {

    setlocale(LC_ALL, "Russian"); // задаём русский текст
    system("chcp 1251"); // настраиваем кодировку консоли

    float a, b, alf;
    std::cout << "Введите два основания (меньшее, затем большее)\n";
    std::cin >> a >> b;
    std::cout << "Введите угол при большем основании\n";
    std::cin >> alf;
    float s = plo(a, b, alf);
    std::cout << "Плошадь равна: " << s;
    return 0;
}

float plo(float a, float b, float alf) {
    const double PI = acos(-1.0);
    return  0.5 * (std::pow(b, 2) - std::pow(a, 2)) * tan(alf * PI / 180);
}