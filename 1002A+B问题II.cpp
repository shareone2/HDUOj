/*************************************************************************
	> File Name: 1002A+B问题II.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月31日 星期日 16时25分42秒
 ************************************************************************/

#include<iostream>

#include<cstring>

using namespace std;

int main () {
    int t, j = 1, e;

    cin >> t;

    e = t;

    while (t--) {
        char a[10000] = {0}, b[10000] = {0};
        int A[10000] = {0}, B[10000] = {0}, lena, lenb, len;

        cin >> a >> b;

        lena = strlen (a);
        lenb = strlen (b);
        len = lena > lenb ? lena : lenb;

        int cnt = 0;

        for (int i = lena - 1; i >= 0; i--) {
            A[cnt++] = a[i] - '0'; 
        }

        cnt = 0;

        for (int i = lenb - 1; i >= 0; i--) {
            B[cnt++] = b[i] - '0';
        }

        for (int i = 0; i < len; i++) {
            B[i] = A[i] + B[i];
            if (B[i] >= 10) {
                B[i] = B[i] - 10;
                B[i + 1]++; 
            }
        }

        if (B[len] != 0) {
            len++;
        }

        cout << "Case " << j++ << ':' << endl;
        cout << a << " + " << b << " = ";

        for (int i = len - 1; i >= 0; i--) {
            cout << B[i];
        }
        if (e != 1) {
            cout << endl << endl;
            e--;
        }  else {
            cout << endl;
        } 
    }

    return 0;
}
