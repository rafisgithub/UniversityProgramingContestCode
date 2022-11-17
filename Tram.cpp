/*Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of tram's 
movement. At the i-th stop ai passengers exit the tram, while bi passengers enter it. The tram is empty 
before it arrives at the first stop. Also, when the tram arrives at the last stop, all passengers exit so
 that it becomes empty.

Your task is to calculate the tram's minimum capacity such that the number of people inside the tram at 
any time never exceeds this capacity. Note that at each stop all exiting passengers exit before any 
entering passenger enters the tram.*/
/*4
0 3
2 5     output 6
4 2
4 0*/
#include<iostream>
using namespace std;
int main(){
	int t,out,in,counter=0,m=0;
	cin>>t;
	while(t--){
		cin>>out>>in;
//		counter-=out;
//		counter+=in;
        counter=counter+(in-out);
		if(counter>m){
			m=counter;
		}
	}
	cout<<m;
}
