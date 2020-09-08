/*************************************************************************
	> File Name: e.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 08时50分50秒
 ************************************************************************/

#include <iostream>
using namespace std;
int t;
char num[100];
int main() {
    cin >> t;
    while (t--) {
        cin >> num;
        int cnt = 0;
        for (int i = 0; num[i] != '\0'; i++) {
            cnt++;
        }
        for (int i = 0; i < cnt; i += 2) {
            char x = num[i];
            num[i] = num[i + 1];
            num[i + 1] = x;
        }
        cout << num << endl;
    }
    return 0;
}

