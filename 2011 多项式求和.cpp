#include <stdio.h>
int main(){ 
    int m;
	while (scanf("%d", &m) != EOF) {
		int a[100];
		for (int i = 0; i < m; i++) {
		    scanf("%d", &a[i]);
		    double sum = 0;
		    for (int j = 1; j <= a[i]; j++) {
			    if (j % 2 == 0) j = - j;
			    sum = sum + 1.00 / j;
			    if (j % 2 == 0) j = - j;
		    }
			printf("%.2lf\n", sum);   
	    }	
	}
    return 0;
}
