/*There are n stones on the table in a row, each of them can be red, green or blue. 
Count the minimum number of stones to take from the table so that any two neighboring stones
had different colors. Stones in a row are considered neighboring if there are no other stones 
between them.
input
3 
RRG
output 1
*/
#include<iostream>
using namespace std;
int main(){
	int n,i,numberOfNeighberStone=0;
	cin>>n;
	char table[n];
	for(i=0;i<n;i++){
		cin>>table[i];
	}
	for(i=0;i<n;i++){
		if(table[i]==table[i+1]){
			numberOfNeighberStone++;
		}
	}
	cout<<numberOfNeighberStone;
	return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,numberOfNeighberStone=0;
	cin>>n;
	string table;
	cin>>table;
	for(i=0;i<n;i++){
		if(table[i]==table[i+1]){
			numberOfNeighberStone++;
		}
	}
	cout<<numberOfNeighberStone
}
*/
