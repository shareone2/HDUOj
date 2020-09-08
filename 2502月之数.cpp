#include <iostream>
#include <cmath>
int t, n;
int main() {
    std :: cin >> t;
    while (t-- && std :: cin >> n) { std :: cout << (int)(pow(2, n - 1) + pow(2, n - 2) * (n - 1)) << std :: endl; }
    return 0;
}
