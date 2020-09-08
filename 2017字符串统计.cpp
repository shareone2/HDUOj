/*************************************************************************
	> File Name: d.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月20日 星期六 08时31分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    n++;
    while (n--) {
        char c;
        int ans = 0, flog = 0;
        while ((c = getchar()) != '\n') {
            flog = 1;
            if (c >= '0' && c <= '9') ans++;
        }
        if (flog == 1) cout << ans << endl;
    }
    return 0;
}
