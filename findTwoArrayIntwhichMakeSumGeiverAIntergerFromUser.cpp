//input 1->array of numbers,input 1->integer
//pair of integers->sum of input 2.
#include<iostream>
using namespace std;
int main(){
long long int arr[200];
int n,size,i;
cout<<"input array size.\n";
cin>>size;
cout<<"Enter array.\n";
for(i=0;i<size;i++){
	cin>>arr[i];
}
cout<<"Entr a integer.\n";
cin>>n;
for(i=0;i<size;i++){
	if(arr[i]+arr[i+1]==n){
		cout<<arr[i]<<" and "<<arr[i+1]<<" makes "<<n;
	}
}
cout<<"Sorry!No matching any array.\n";
	return 0;
	
}
