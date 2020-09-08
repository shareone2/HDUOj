#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,flag;
	while(cin>>a>>b){
	flag = 0;
	if((a>=100&&a<=999)&&(b>=100&&b<=999)){
	while(a<=b){
	c=a/100;
	d=a%100/10;
	e=a%100%10;
	if(a==c*c*c+d*d*d+e*e*e) {
		if(flag == 0)
		cout<<a;
		else 
		cout<<" "<<a;
		flag = 1;
	}
	a++;
	}
	if(flag == 0)
	cout << "no";
    }
    cout<<endl;
    }
	return 0;
 } 
