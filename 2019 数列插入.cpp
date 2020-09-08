#include <iostream>
using namespace std;
int main(){
	int n,m,flag,i,x;
	while(cin>>n>>m){
		if(n==0&&m==0){
			break;
		}
		flag=1;
		while(n--){
			cin>>x;
			if(x>=m&&flag==1){
				flag=0;
				cout<<m<<" "<<x;
			}
			else{
				cout<<x;
			}
			if(n==0){
				cout<<endl;
			}
			else{
				cout<<" ";
			}
		}
	}
	return 0;
} 
