/*************************************************************************
	> File Name: a.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 11时14分29秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int n, m;
int main() {
    while (scanf("%d%d", &n, &m) != EOF && (n != 0 || m != 0)) {
        if ((n - 1) % 2 == 0 && (m - 1) % 2 == 0) { cout << "What a pity!" << endl; }
        else { cout << "Wonderful!" << endl; }
    }
    return 0;
}
