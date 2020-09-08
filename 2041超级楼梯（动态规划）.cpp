#include <iostream>
int n, m, num[45];
int main() {
    num[1] = 0, num[2] = 1, num[3] = 2;
    for (int i = 4; i <= 40; i++) { num[i] = num[i - 1] + num[i - 2]; }
    std :: cin >> n;
    while (n-- && std :: cin >> m) { std :: cout << num[m] << std :: endl;  }
    return 0;
}
