/************************************************************************
	> File Name: b.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 08时35分16秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
int is_prime[10005], prime[10005], cnt;
int main() {
    int n;
    while (cin >> n && n != 0) {
        memset(is_prime, 0, sizeof(is_prime));
        cnt = 0;
        is_prime[0] = 1;
        is_prime[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (!is_prime[i]) prime[cnt++] = i;
            for (int j = 0; j < cnt && i * prime[j] <= n; j++) {
                is_prime[i * prime[j]] = 1;
                if (i % prime[j] == 0) break;
            }
        }
        int ans = 0;
        for (int i = 0; i < cnt; i++) {
            for (int j = 0; j < cnt; j++) {
                if (i != j && prime[i] + prime[j] == n) {
                    ans++;
                }
            }
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
