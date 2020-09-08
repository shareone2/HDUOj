/*************************************************************************
	> File Name: e.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月20日 星期六 13时52分46秒
 ************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main () {
    int n;
    while (cin >> n && n != 0) {
        string color[1005], is_color;
        int num[1005] = {0};
        for (int i = 1; i <= n; i++) {
            cin >> is_color;
            int t = 0;
            for (int cnt = 1; ;) {
                if (is_color == color[cnt]) {
                    num[cnt]++;
                    t = 1;
                } else if (color[cnt].size() == 0) {
                    color[cnt] = is_color;
                    t = 1;
                } else if (color[cnt].size() != 0 && color[cnt] != is_color){
                    cnt++;
                }
                if (t == 1) break;
            }    
        }
        int max = 0, flog;
        for (int i = 1; color[i].size() != 0; i++) {
            if (num[i] > max) {
                max = num[i];
                flog = i;
            }
        }
        cout << color[flog] << endl;
    }
    return 0;
}
