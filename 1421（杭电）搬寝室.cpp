/*************************************************************************
	> File Name: 1421搬寝室.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月26日 星期日 08时44分00秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int ch[2005];
int dp[2005][2005];
int main() {
	int n, k;
	while(cin >> n >> k) {
	    for (int i = 1; i <= n; i++) { cin >> ch[i]; }
	    sort(ch + 1, ch + n + 1);
	    for (int i = 1; i <= k; i++) {
		    for (int j = 2 * i; j <= n; j++) {
			    if (i * 2 == j) dp[i][j] = dp[i - 1][j - 2] + ((ch[j] - ch[j - 1]) * (ch[j] - ch[j - 1]));
			    else dp[i][j] = min(dp[i][j - 1], dp[i - 1][j - 2] + (ch[j] - ch[j - 1]) * (ch[j] - ch[j - 1])); 
		    }
	    }
	    cout << dp[k][n] << endl;
	}
	return 0;
}

