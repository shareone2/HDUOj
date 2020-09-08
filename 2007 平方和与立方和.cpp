#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int m,n,sum1,sum2,sum3,sum4;
	while (cin>>m>>n){
		if (m<n){
			sum1=0;sum2=0;
			for(;m<=n;m++){
				if(m%2!=0)
				sum1=sum1+pow(m,3);	
				else
				sum2=sum2+pow(m,2);
			}
	cout<<sum2<<" "<<sum1<<endl;
	}
	else{sum3=0;sum4=0;
		 for(;n<=m;n++){
		 	if(n%2!=0)
		 	sum3=sum3+pow(n,3);
		 	else
		 	sum4=sum4+pow(n,2);
		 }
		cout<<sum4<<" "<<sum3<<endl; 
	}
	}
	return 0;
}
