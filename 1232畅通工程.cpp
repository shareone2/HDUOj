/*************************************************************************
	> File Name: d.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 09时47分50秒
 ************************************************************************/

#include <iostream>
using namespace std;
int num[1005], n;
int find(int x) { return num[x] == x ? x : (num[x] = find(num[x])); }
int main() {
    while (cin >> n && n != 0) {
        int t;
        cin >> t;
        for (int i = 0; i <= n; i++) {
            num[i] = i;
        }
        int base_a, base_b, cnt = 0;
        for (int i = 1; i <= t; i++) {
            cin >> base_a >> base_b;
            if (find(num[base_a]) != find(num[base_b])) {
                cnt++;
                num[find(num[base_a])] = find(num[base_b]);
            }   
        } 
        cout << n - cnt - 1 << endl;
    }
    return 0;
}
