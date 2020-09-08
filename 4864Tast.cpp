/*************************************************************************
	> File Name: b.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月10日 星期六 11时54分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct stu{ int x, y; };
int n, m;
int cmp(stu sss, stu zzz) { 
    if (sss.x == zzz.x) { return sss.y > zzz.y; }
    return sss.x > zzz.x; 
}
int main() {
    while (scanf("%d%d", &n, &m) != EOF) {
        stu a[100008], b[100008];
        int vis[110] = {0};
        for (int i = 0; i < n; i++) { scanf("%d%d", &a[i].x, &a[i].y); }
        for (int i = 0; i < m; i++) { scanf("%d%d", &b[i].x, &b[i].y); }
        sort(a, a + n, cmp);
        sort(b, b + m, cmp);
        long long sum = 0;
        int cnt = 0;
        for (int i = 0, left = 0; i < m; i++) {
            for (; left < n && a[left].x >= b[i].x; left++) { vis[a[left].y]++; }
            for (int j = b[i].y; j <= 100; j++) { 
                if (vis[j]) {
                    cnt++;
                    sum = sum + 500 * b[i].x + 2 * b[i].y;
                    vis[j]--;
                    break;
                }
            }
        }  
        printf("%d %lld\n", cnt, sum);
    }  
    return 0;
}
