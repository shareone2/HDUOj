/*************************************************************************
	> File Name: c.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月10日 星期六 09时14分49秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n;
int main() {
    while (cin >> n && n != 0) {
        int cnt = 0;
        while (n != 1) {
            if (n % 2 == 0) { n = n / 2; } 
            else { n = (3 * n + 1) / 2; }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
