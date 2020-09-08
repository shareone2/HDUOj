/*************************************************************************
	> File Name: 2018母牛的故事.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月04日 星期四 18时33分11秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        char a[1000];
        cin >> a;
        int cnt = 0;
        for (int i = 0; a[i] != '\0'; i++) {
            if (a[i] >= '0' && a[i] <= '9') {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

