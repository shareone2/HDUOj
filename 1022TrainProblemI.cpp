/*************************************************************************
	> File Name: 1022训练问题I.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 15时01分43秒
 ************************************************************************/

#include <iostream>
#include <stack>

using namespace std;

int main () {
    int n;
    while (cin >> n) {
        stack <int> train;
        char a[10], b[10];
        int i = 1, j = 0, flog[100], cnt = 1;
        cin >> a >> b;
        train.push(a[0]);
        flog[0] = 1;
        while (!train.empty()) {
            if (train.top() != b[j]) {
                if (i == n) break;
                train.push(a[i++]);
                flog[cnt++] = 1;
            } else if (train.top() == b[j]) {
                train.pop();
                flog[cnt++] = 0;
                if (train.empty() && j < n) {
                    train.push(a[i++]);
                    flog[cnt++] = 1;
                }
                j++;
            }
        }
        if (train.empty()) {
            cout << "Yes." << endl;
            for (int i = 0; i < 2 * n; i++) {
                if (flog[i] == 1) cout << "in" << endl;
                else cout << "out" << endl;
            }
            cout << "FINISH" << endl;
        } else {
            cout << "No." << endl;
            cout << "FINISH" << endl;
        }
    }
    return 0;
} 
