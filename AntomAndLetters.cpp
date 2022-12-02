#include<iostream>
using namespace std;
int main(){
	char value;
	int distinct=0;
	int alphabet[26]={0};
	while((value=getchar())!='\n'){
		if(value>='a' && value<='z'){
			alphabet[value-'a']+=1;
		}
	}
	for(int j=0;j<26;j++){
		if(alphabet[j]>0){
			distinct++;
		}
	}
	cout<<distinct;
	return 0;
}
