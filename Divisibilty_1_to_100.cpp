// small side project

#include <iostream>
#include <vector>

int main() {
    std::vector<int> divisors;
    for (int i = 1; i <= 100; ++i) {
        divisors.push_back(i);
    }

    for (int n = 1; n <= 100; ++n) {
        std::cout << n << " divisible by: ";
        bool divisible = false;

        for (int d : divisors) {
            if (n % d == 0) {
                std::cout << d << " ";
                divisible = true;
            }
        }

        std::cout << '\n';
    }

}
