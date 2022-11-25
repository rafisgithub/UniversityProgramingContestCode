/*Being a nonconformist, Volodya is displeased with the current state of things, particularly with the 
order of natural numbers (natural number is positive integer number). He is determined to rearrange them.
 But there are too many natural numbers, so Volodya decided to start with the first n. He writes down the 
 following sequence of numbers: firstly all odd integers from 1 to n (in ascending order), then all even 
 integers from 1 to n (also in ascending order). Help our hero to find out which number will stand at the 
 position number k.*/
 
 //10 3 output 5
 //7 7 output 6
//#include<iostream>
//using namespace std;
//int main(){
//	long long int n,k,p,ans;
//	cin>>n>>k;
//	if(n%2){
//		p=(n/2)+1;
//	}else{
//		p=n/2;
//	}
//	if(k<=p){
//		ans=2*k-1;
//	}else{
//		k=k-p;
//		ans=2*k;
//	}
//	cout<<ans;
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int n,k,oddNumberBoundary,result;
	cin>>n>>k;
	if(n%2){
		oddNumberBoundary=(n/2)+1;
	}else{
		oddNumberBoundary=n/2;
	}
	if(k<=oddNumberBoundary){
		result=2*k-1;
	}else{
		k=k-oddNumberBoundary;
		result=2*k;
	}
	cout<<result;
	return 0;
}
