#include <iostream> 

#include <cmath>

using namespace std;

int main(){
	int a[10000];
	int n;
	while(cin >> n) {
		if (n == 0) {
	        break;
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    for (int i = 0; i < n - 1; i++) {
		    for (int j = 0; j < n - 1 - i; j++) {
		        if (abs(a[j]) > abs(a[j + 1])) {
		    	    int t = a[j + 1];
		    	    a[j + 1] = a[j];
				    a[j] = t; 
			    }
		    }
	    }
	    for (int i = n - 1; i >= 0; i--) {
	    	if (i == n - 1) {
			    cout << a[i];
			}
	        else {
		        cout << " " << a[i];
		    }
	    }
	    cout << endl;
    }
	return 0;
}
