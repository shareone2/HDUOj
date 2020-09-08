/*************************************************************************
	> File Name: 3347Calculatetheexpression.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月15日 星期四 19时33分01秒
 ************************************************************************/

#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int judge(string a, map <string, int> b);
int ss(string a);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        string a;
        char b;
        map <string, int> m;
        cin >> n;
        for (int i = 1; i <= n - 1; i++) { 
            cin >> a >> b >> c;
            m[a] = c;
        }
        int sum = 0;
        string z1;
        cin >> z1;
        sum += judge(z1, m);
        char x;
        string e;
        while (cin >> x >> e) {
            if (x == '=') { break; }
            sum += (x == '-' ? -1 * judge(e, m) : judge(e, m));
        }
        cout << sum << endl;
    }
    return 0;
}
int judge(string a, map <string, int> b) {
    int c = 1;
    if (a[0] == '-') { c = -1; }
    if (b.find(a) != b.end()) { c = c * b[a]; }
    else { c = c * ss(a); } 
    return c;
}
int ss(string a) {
    int b = 0, sum = 0;
    if (a[0] == '-') { b = 1; }
    for (; b < a.size(); b++) { sum = sum * 10 + (int)a[b] - '0'; }
    return sum;
}
