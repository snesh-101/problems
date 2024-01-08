#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    while (n--) {
        long long x, y;
        std::cin >> x >> y;

        if (x % y == 0) {
            std::cout << 0 << std::endl;
        } else {
            long long remainder = x % y;
            long long moves = y - remainder;
            std::cout << moves << std::endl;
        }
    }

    return 0;
}
