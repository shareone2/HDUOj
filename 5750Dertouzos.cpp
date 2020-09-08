/*************************************************************************
	> File Name: h.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月12日 星期一 09时40分55秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
bool is_prime[1000001];
int prime[1000001], cnt = 0;
int main() {
    memset(is_prime, 0, sizeof(is_prime));
    is_prime[0] = 1;
    is_prime[1] = 1;
    for (int i = 2; i <= 1000000; i++) {
        if (!is_prime[i]) { prime[cnt++] = i; }
        for (int j = 0; j < cnt && i * prime[j] <= 1000000; j++) {
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) { break; }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n, d, number = 0;
        scanf("%d%d", &n, &d);
        for (int i = 0; i < cnt; i++) {
            if (prime[i] > d || prime[i] * d >= n) { break; }
            if (d % prime[i] == 0) {
                number++;
                break;
            }
            number++;
        }
        cout << number << endl;
    }
    return 0;
}
