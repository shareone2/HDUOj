#include <iostream>
int n, sum;
int main() {
    while (std :: cin >> n) {
        for (sum = 1; n > 1; n--) { sum = (sum + 1) * 2; }
        std :: cout << sum << std :: endl;
    }
    return 0;
}
