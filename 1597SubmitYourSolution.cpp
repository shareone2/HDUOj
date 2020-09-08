/*************************************************************************
	> File Name: f.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月20日 星期六 10时23分05秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        /*int a, sum = 0, flog;
        cin >> a;
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= i; j++) {
                flog = j;
                sum++;
                if (j + 1 > 9) j = 0;
                if (sum == a) break;
            }
            if (sum == a) break;
        }
        cout << flog << endl;*/
        int a, flog;
        cin >> a;
        for (int i = 1; ; i++) {
            if (a <= i) {
                break;
            }
            a -= i;
        }
        for (int i = 1; ; i++) {
            flog = i;
            a--;
            if (a == 0) break;
            if (i + 1 > 9) i = 0;
        }
        cout << flog << endl;
        
    }
    return 0;
}
