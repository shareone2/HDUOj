#include <iostream>
#include <cmath>
int n, r;
int main() {
	while (std :: cin >> n >> r) {
		if (n < 0) { std :: cout << '-'; }
                 n = abs(n);
		int flog[50], cnt = 0;
		for (; n; n /= r) { flog[cnt++] = n % r; }
		for (int i = cnt - 1; i >= 0; i--) {
			if (flog[i] >= 10) { std :: cout << (char)(flog[i] + 55); }
			else { std :: cout << flog[i]; } 
		}
		std :: cout << std :: endl;
	}
	return 0;
}

