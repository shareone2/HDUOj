#include <iostream>
int n, m, num[105], sum, i;
int main() {
    for (i = 1; i <= 100; i++) { num[i] = i * 2; }
    while (std :: cin >> n >> m) {
        for (i = 1, sum = 0; i <= n / m; i++, sum = 0) {
            for (int j = 1; j <= m; j++) { sum += num[(i - 1) * m + j]; }
            i == 1 ? (std :: cout << sum / m) : (std :: cout << ' ' << sum / m);
        }
        for (i = 1; i <= n % m; i++) { sum += num[(n / m) * m + i]; }
        n % m ? (std :: cout << ' ' << sum / (n % m) << std :: endl) : (std :: cout << std :: endl);
    }
    return 0;
}
