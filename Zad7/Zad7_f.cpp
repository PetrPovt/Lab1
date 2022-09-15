#include <cmath>

extern float s, a, b, alf;

void plo() {
    const double PI = acos(-1.0);
    s = 0.5 * (std::pow(b, 2) - std::pow(a, 2)) * tan(alf * PI / 180);
}

