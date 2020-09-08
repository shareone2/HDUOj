/*************************************************************************
	> File Name: a.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月10日 星期六 09时40分05秒
 ************************************************************************/

#include <iostream>
using namespace std;
int c, n, m;
int main() {
    cin >> c;
    for (int i = 1; i <= c; i++) {
        cin >> n >> m;
        if (n % (m + 1) == 0) { cout << "second" << endl; }
        else { cout << "first" << endl; }
    }
    return 0;
}
