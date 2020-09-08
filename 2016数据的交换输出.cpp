/*************************************************************************
	> File Name: 2016数据的交换输出.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 18时31分01秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int a[110];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min = a[0], j = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] <= min) {
                min = a[i];
                j = i;
            }
        }
        a[j] = a[0];
        a[0] = min;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cout << a[i];
            } else {
                cout << ' ' << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}

