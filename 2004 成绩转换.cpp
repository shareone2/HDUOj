#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d",&a)!=EOF){
		if(a>=0&&a<=100){
			b=a/10;
			switch(b){
				case 0:
				case 1:
				case 2:
				case 3:
				case 4: 
				case 5:printf("E\n");break;
				case 6:printf("D\n");break;
				case 7:printf("C\n");break;
				case 8:printf("B\n");break;
				case 9:printf("A\n");break;
				default :printf("A\n");break;	
			}
		}
		else{
			printf("Score is error!\n");
		}
	}
	return 0;
} 
