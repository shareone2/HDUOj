#include <stdio.h>
int main(){
	int n;
	while(scanf("%d", &n) != EOF) {
		double a[100];
		for (int i = 0; i < n; i++) {
	        scanf("%lf", &a[i]);
	    }
	    for (int i = 0; i < n - 1; i++) {
		    for (int j = 0; j < n - 1 - i; j++) {
		        if (a[j] > a[j + 1]) {
		    	    int t = a[j + 1];
		    	    a[j + 1] = a[j];
				    a[j] = t; 
			    }
		    }
	    }
	    double sum = 0;
	    for (int i = 1; i < n - 1; i++) {
	        sum = sum + a[i]; 
		}
		double b;
		b = sum / (n - 2);
		printf("%.2lf\n", b);
	}
	return 0;
} 
