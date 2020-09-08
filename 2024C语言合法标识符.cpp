#include <iostream>
#include <cstring>

using namespace std;

bool isLegal(string s);

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    while (n--) {
        string a;
        getline(cin, a);
        cout << (isLegal(a) ? "yes" : "no") << endl;
    }
    return 0;
}

bool isLegal(string s) {
	if (s[0] <= '9' && s[0] >= '0') {
        return false;
    }
	for (int i = 0; i < s.length(); i++) {
		if (!(s[i] == '_' || s[i] <= '9' && s[i] >= '0' || s[i] <= 'z' && s[i] >= 'a' || s[i] <= 'Z' && s[i] >= 'A')) {
			return false;
		}
	}
	return true;
}
