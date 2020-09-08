#include <stdio.h>
int main() {
	int m, i, j, a;
	double n;
	while (scanf ("%d", &m) != EOF && m != 0) {
		i = 0;
		j = 0;
		a = 0; 
		while (m--) {
	    scanf ("%lf", &n);
		if (n ==0) i = i + 1;
		if (n > 0) j = j + 1;
		if (n < 0) a = a + 1;
	}
	printf ("%d %d %d\n", a, i, j);
	}
	return 0;
} 
