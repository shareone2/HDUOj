/*************************************************************************
	> File Name: b.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 11时01分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int a, b;
};
int n;
int cmp(node x, node y) {
    return x.b < y.b;
}
int main() {
    while (cin >> n && n) {
        node z[105];
        for (int i = 1; i <= n; i++) {
            cin >> z[i].a >> z[i].b;
        }
        sort(z + 1, z + n + 1, cmp);
        int cnt = 0, r = 0;
        for (int i = 1; i <= n; i++){
            if (z[i].a >= r) {
                cnt++;
                r = z[i].b; 
            } 
        }
        cout << cnt << endl;
    }
    return 0;
}
