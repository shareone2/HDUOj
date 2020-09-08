#include <iostream>
using namespace std;
int main(){
	int a[2][12] = {{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
	int m, n, day;
	char x, y;
	while (cin >> m >> x >> n >> y >> day) {
		int sum = 0;
		if ((m % 4 == 0 && m % 100 != 0) || m % 400 == 0) {
			for (int i = 0; i < n - 1; i++) {
				sum = a[0][i] + sum;
			}
		}
		else {
			for (int i = 0; i < n - 1; i++) {
				sum = a[1][i] + sum;
			}
		}
		sum = sum + day;
		cout << sum << endl;
	}
	return 0;
} 
