/*Manao works on a sports TV. He's spent much time watching the football games 
of some country. After a while he began to notice different patterns. 
For example, each team has two sets of uniforms: home uniform and guest uniform. When a team plays a game at home, the players put on the home uniform. When a team plays as a guest on somebody else's stadium, the players put on the guest uniform. The only exception to that rule is: when the home uniform color of the host team matches the guests' uniform, the host team puts on its guest uniform as well. For each team the color of the home and guest uniform is different.
There are n teams taking part in the national championship. The championship 
consists of n·(n - 1) games: each team invites each other team to its stadium.
At this point Manao wondered: how many times during the championship is a host
team going to put on the guest uniform? Note that the order of the games does
not affect this number.
You know the colors of the home and guest uniform for each team.
For simplicity, the colors are numbered by integers in such a way that no two 
distinct colors have the same number. Help Manao find the answer to his 
question.*/
//input
//3
//1 2
//2 4        output 1
//3 4

//#include<iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//int main(){
//	int home,away,n,guest=0;
//	cin>>n;
//	vector<pair<int ,int > >team(n);
//	for(int i=0;i<n;i++){
//		cin>>home>>away;
//		team[i].first=home;
//		team[i].second=away;
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(i==j)
//			continue;
//			if(team[i].first==team[j].second)
//			guest++;
//		}
//	}
//	cout<<guest;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
	int t,home,guest,counter=0;
	cin>>t;
	vector<pair<int,int> >team(t);
	for(int i=0;i<t;i++){
		cin>>home>>guest;
		team[i].first=home;
		team[i].second=guest;
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(i==j)
				continue;
			if(team[i].first==team[j].second)
				counter++;
			
		}
	}
	cout<<counter;
	return 0;
}

