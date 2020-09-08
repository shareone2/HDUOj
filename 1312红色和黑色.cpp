/*************************************************************************
	> File Name: 1312红色和黑色.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月24日 星期三 19时26分54秒
 ************************************************************************/

#include <iostream>
#include <cstring>

#define MAX_N 25

using namespace std;

int dir[4][2] = {-1, 0, 1, 0, 0, 1, 0, -1}; // 方向数组
char arr[MAX_N][MAX_N] = {0}; // 地图
int vis[MAX_N][MAX_N] = {0}; // 标记数组
int n, m, ans = 0; // n：代表列 m：代表行 ans：能走到的黑转数量

void DFS(int x,int y) {
    // x，now_x 代表行
    // y，now_y 代表列
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int now_x = x + dir[i][0];
        int now_y = y + dir[i][1];
        // 该点在地图内，没有被访问过，并且该点为黑砖，则ans加1，从该点开始继续往下走
        if(now_x >= 0 && now_y >= 0 && now_x < m && now_y < n && !vis[now_x][now_y] && arr[now_x][now_y] == '.'){
            ans++;
            DFS(now_x, now_y);
        }
    }
    return ;
}
int main() {
    int x, y; // 记录起点位置
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        memset(vis, 0, sizeof(vis));
        ans = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '@'){
                   x = i, y = j;
                }
            }
        }
        DFS(x, y);
        cout << ans << endl;
    }
    return 0;
}
