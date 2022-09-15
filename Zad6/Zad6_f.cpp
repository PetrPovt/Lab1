#include <cmath>

float plo(float a, float b, float alf) {
    const double PI = acos(-1.0);
    return  0.5 * (std::pow(b, 2) - std::pow(a, 2)) * tan(alf * PI / 180);
}