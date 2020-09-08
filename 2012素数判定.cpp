/*************************************************************************
	> File Name: 2012素数判定.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月03日 星期三 21时39分01秒
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int juge(int sum);

int main () {
    int x, y;
    while (cin >> x >> y) {
        int sum = 0, j = 1;
        if (x == 0 && y == 0) break;
        for (int i = x; i <= y; i++) {
            sum = pow(i, 2) + i + 41;
            j = juge(sum);
            if (j == 0) {
                cout << "Sorry" <<endl;
                break;
            }
        }
        if (j == 1) cout << "OK" << endl;
        j = 1;
    }
    return 0;
}

int juge(int sum) {
    for (int i = 2; i * i <= sum; i++) {
        if (sum % i == 0) return 0;
    }
    return 1;
}
