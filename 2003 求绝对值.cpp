#include <stdio.h>
int main(){
	double a;
	while(scanf("%lf",&a)!=EOF){
	if(a<0){	
	printf("%.2lf\n",-a);	
	}
	else
	printf("%.2lf\n",a);
    }
    return 0;
}
