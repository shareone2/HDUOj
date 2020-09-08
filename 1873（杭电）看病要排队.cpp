/*************************************************************************
	> File Name: c.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月21日 星期日 11时17分21秒
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct Node{
    int value, ID;
    Node() {}
    Node(int a, int b) {
        value = a;
        ID = b;
    }
    bool operator<(const Node node) const{
        if (node.value == value) {
            return node.ID < ID;
        }
        return  node.value > value;
    }
};

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int num = 0;
        priority_queue<Node> q[12];
        for (int i = 0; i < n; i++) {
            string str;
            int a, b;
            cin >> str >> a;
            if (str == "IN") {
                cin >> b;
                q[a].push(Node(b, ++num));
            } else {
                if (q[a].empty()) {
                    cout << "EMPTY" << endl;
                } else  {
                    cout << q[a].top().ID << endl;
                    q[a].pop();
                }
            }
        }
    }
    return 0;
}

