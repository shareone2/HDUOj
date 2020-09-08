/*************************************************************************
	> File Name: g.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 09时36分53秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
struct node {
    string m;
    int n, i, no;
    friend bool operator < (node a, node b) {
        if (a.no != b.no) { return a.no > b.no; }
        else return a.i > b.i;
    }
};
int cnt = 0;
string a;
priority_queue <node> Q;
int main() {
    while (cin >> a) {
        if (a == "GET") {
            if (!Q.empty()) {
                cout << Q.top().m << ' ' << Q.top().n << endl;
                Q.pop();
            } else {
                cout << "EMPTY QUEUE!" << endl;
            }
        } else if (a == "PUT") {
            node flog;
            cin >> flog.m >> flog.n >> flog.no;
            flog.i = cnt++;
            Q.push(flog);
        }
    }
    return 0;
}
