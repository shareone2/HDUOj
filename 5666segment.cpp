/*************************************************************************
	> File Name: c.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 10时11分40秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int t;
long long quickpower (long long a, long long b, long long c);
int main() {
    scanf("%d", &t);
    while (t--) {
        long long q, p;
        cin >> q >> p;
        //sum = (q - 1) * (q - 2) / 2 % p;
        if ((q - 2) % 2) cout << quickpower((q - 1) / 2, (q - 2), p) << endl;
        if ((q - 1) % 2) cout << quickpower((q - 2) / 2, (q - 1), p) << endl;
}
    return 0;
}
long long quickpower (long long a, long long b, long long c) {
    long long ans = 0, base = a;
    while (b) {
        if (b & 1) { ans = (ans + base) % c; }
        base = (base << 1) % c;
        b >>= 1;
    }
    return ans % c;
}
