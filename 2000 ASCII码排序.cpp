#include <stdio.h>
int main(){
	char a,b,c,x1;
	while(scanf("%c%c%c%c",&a,&b,&c,&x1)!=EOF){
		if(a>b){
			x1=a;
			a=b;
			b=x1;
		}
		if(a>c){
			x1=a;
			a=c;
			c=x1;
		}
		if(b>c){
			x1=b;
			b=c;
			c=x1;
		}
		printf("%c %c %c\n",a,b,c);
	}
	return 0;
} 
