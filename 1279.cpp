/*************************************************************************
	> File Name: 1279.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年02月13日 星期三 16时04分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    while (a--){
        cin >> b;
        int t = 1;
        int c = 1;
        while (b != 1){
            if (b % 2 != 0){
                if (t == 1){
                    cout << b;
                    t = 0;
                    c = 0;
                } else {
                    cout << " " << b;
                }
                b = b * 3 + 1;
            } else {
                b = b / 2;
            }
        }
        if (t == 0){
            cout << endl;
        }
        if (c == 1){
            cout << "No number can be output !" << endl;
        }
    }
    return 0;
}
