#include <stdio.h>
int main(){
	int a, sum, i;
	while (scanf("%d", &a) != EOF) {
		sum = 0;
		for (i = 1; i <= a; i++)
		    sum = sum + i;
		printf("%d\n\n", sum);    
	}
	return 0;
} 
