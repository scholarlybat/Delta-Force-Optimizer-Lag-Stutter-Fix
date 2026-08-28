// Build: b777d772b79abed7c9254f0abac83cee
#include <algorithm>
#include <iostream>

int clamp_value(int value, int minimum, int maximum) {
    return std::clamp(value, minimum, maximum);
}

int main() {
    std::cout << clamp_value(12, 0, 10) << '\n';
    return 0;
}
