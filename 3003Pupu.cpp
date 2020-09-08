/*************************************************************************
	> File Name: g.cpp
	> Author: 
	> Mail: 
    > Created Time: 2019年04月21日 星期日 08时51分33秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    long long n;
    while (cin >> n && n != 0) {
        long long ans = 1, b = n - 1, base = 2;
        while (b > 0) {
            if (b & 1) ans = ans * base % n;
            base = base * base % n;
            b >>= 1;
        }
        cout << (ans + 1) % n << endl;
    }
    return 0;
}
