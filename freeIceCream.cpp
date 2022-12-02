#include<iostream>
using namespace std;
int main(){
	int n,distressed=0;
	long long int iceCream=0;
	cin>>n>>iceCream;
	char sign;
	long long quantity;
	while(n--){
		cin>>sign>>quantity;
		if(sign=='+'){
			iceCream+=quantity;
		}else if(sign=='-'){
			if(iceCream<quantity){
				distressed++;
			}else{
				iceCream-=quantity;
			}
			
		}
	}
	cout<<iceCream<<" "<<distressed;
	return 0;
}
