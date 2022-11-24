#include<iostream>
using namespace std;
int main(){
	int y,w,h=6,n;
	cin>>y>>w;
	if(y>=w){
		n=(6-y)+1;
	}else{
		n=(6-w)+1;
	}
	if(n==6){
		n=1;
		h=1;
	}else if(n==2 || n==4){
		n=n/2;
		h=h/2;
	}else if(n==3){
		n=n/3;
		h=h/3;
	}
	cout<<n<<"/"<<h;
	return 0;
}
