#include <cstdio>
#include <iostream>
#include "cmath"

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::puts("please enter a, b and c for \"ax^2+bx+c=0\":");
    std::scanf("%d %d %d", &a, &b, &c);

    float d = pow(b, 2) - (4 * a * c);
    if (d > 0) {
        std::printf("solution 1: %f\nsolution 2: %f\n", (-b + std::sqrt(d)) / (2 * a), (-b - std::sqrt(d)) / (2 * a));
    } else if (d < 0) {
        std::printf("solution: undefined\n");
    } else {
        std::printf("solution: %d\n", -b / (2 * a));
    }

}