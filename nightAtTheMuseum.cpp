//#include<iostream>
//#include<cmath>
//using namespace std;
//typedef long ll;
//int main(){
//	string s;
//	cin>>s;
//	char start='a';
//	ll sum=0;
//	for(int i=0;i<s.size();i++){
//		ll l1=abs(s[i]-start);
//		ll l2=26-abs(l1);
//		sum+=min(l1,l2);
//		start=s[i];
//	}
//	cout<<sum<<endl;
//	return 0;
//}
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	string s;
	cin>>s;
	char start='a';
	long long int l1,l2,sum=0;
	for(int i=0;i<s.size();i++){
		l1=abs(s[i]-start);
		l2=abs(26-l1);
		sum+=min(l1,l2);
		start=s[i];
	}
	cout<<sum;
	return 0;
}

