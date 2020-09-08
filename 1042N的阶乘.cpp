/*************************************************************************
	> File Name: T1102求10000以内n的阶乘.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 19时08分05秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int a[100000] = {0};
        a[1] = 1;
        a[0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= a[0]; j++) {
                a[j] = a[j] * i;
            }
            for (int j = 1; j <= a[0]; j++) {
                if (a[j] < 10) continue;
                if (a[j] > 9) {
                    a[j + 1] = a[j + 1] + a[j] / 10;
                    a[j] = a[j] % 10;
                    if (j == a[0]) {
                    a[0]++;
                    }
                }
            }
        }
        for (int i = a[0]; i > 0; i--) {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}

