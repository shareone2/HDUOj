/*************************************************************************
	> File Name: d.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 09时05分06秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
struct edge {
    int a, b, cost;
};
int n, num[105];
int cmp (edge x, edge y) { return x.cost < y.cost; }
int find(int x) { return num[x] == x ? x : (num[x] = find(num[x])); }
int main() {
    while (cin >> n && n) {
        edge e[5000];
        for (int i = 0; i <= n; i++) { num[i] = i; }
        for (int i = 1; i <= n * (n - 1) / 2; i++) { cin >> e[i].a >> e[i].b >> e[i].cost; }
        sort(e + 1, e + n * (n - 1) / 2 + 1, cmp);
        int flog = n, sum = 0;
        for (int i = 1; i <= n * (n - 1) / 2; i++) {
            if (find(num[e[i].a]) != find(num[e[i].b])) {
                sum += e[i].cost;
                num[find(e[i].a)] = find(num[e[i].b]);
                flog--;
            }
            if (flog == 1) { break; }
        }
        cout << sum << endl;
    }
    return 0;
}
