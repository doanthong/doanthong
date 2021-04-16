#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m;
	cin>>m;
	int n=m;
	int chuso,SoNghichDao=0;
	while(n>0){
		chuso=n%10;
		SoNghichDao=SoNghichDao+chuso*pow(10,int(log10(n)));
		n=n/10;
	}
	cout<<n;
	
}
