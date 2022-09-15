#include <cstdio>

int main() {
    float a = 0;
    float b = 0;

    std::puts("please enter a nd b for \"ax+b=0\":");
    std::scanf("%f %f", &a, &b);

    float x = -b / a;
    std::printf("solution: %f:2\n", x);
}