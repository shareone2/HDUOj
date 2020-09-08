#include <iostream>
int n, m, num[45];
int solve(int i);
int main() {
    std :: cin >> n;
    while (n-- && std :: cin >> m) { std :: cout << solve(m) << std :: endl; }
    return 0;
}
int solve(int i) {
    if (num[i]) { return num[i]; }
    else if (i <= 3) { return num[i] = i - 1; }
    else { return num[i] = solve(i - 1) + solve(i - 2); }
}

