/*************************************************************************
	> File Name: a.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 08时38分12秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
int t, n, k,num[105], cnt;
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> num[i];
        }
        for (int i = 1; i <= n; i++) {
            if (k != i && num[k] < num[i]) cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
        memset(num, 0, sizeof(num));
    }
    return 0;
}
