#include <stdio.h>
int main()
{
	int a,b,c,sum;
	while((scanf("%d",&a))!=EOF)
	{
	sum=1;
	for(b=1;b<=a;b++)
	{
		scanf("%d",&c);
		if(c%2!=0)
		sum=sum*c;
	}
	printf("%d\n",sum);
}
	return 0;
 } 
