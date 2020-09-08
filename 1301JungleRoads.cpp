/*************************************************************************
	> File Name: e.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月13日 星期二 15时16分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct edge {
    int a, b, cost;
};
int t, p[30];
int cmp(edge i, edge j) { return i.cost < j.cost; }
int find(int x) { return p[x] == x ? x : (p[x] = find(p[x])); }
int main() {
    while (cin >> t && t) {
        edge e[100];
        int cnt = 1, sum = 0, flog = t;
        for (int i = 0; i <= t; i++) { p[i] = i; }
        for (int flog = t; flog > 1; flog--) {
            int n, ss;
            char x, z1;  
            cin >> x >> n;
            for (int i = 1; i <= n; i++) {
                cin >> z1 >> ss;
                e[cnt].a = (int)x - 64;
                e[cnt].b = (int)z1 - 64;
                e[cnt++].cost = ss;
            }
        }
        sort(e + 1, e + cnt, cmp);
        for (int i = 1; i < cnt; i++) {
            if (t == 1) { break; }
            if (find(p[e[i].a]) != find(p[e[i].b])) { 
                sum = sum + e[i].cost;
                p[find(e[i].a)] = find(p[e[i].b]);
                t--;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
