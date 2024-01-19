#include <iostream>

int main() {
    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << 13 << " * " << 0.165 << " = " << 2.145;
    return 0;
}