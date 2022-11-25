/*akko, Wakko and Dot, world-famous animaniacs, decided to rest from acting in
cartoons, and take a leave to travel a bit. Yakko dreamt to go to Pennsylvania,
his Motherland and the Motherland of his ancestors. Wakko thought about 
Tasmania, its beaches, sun and sea. Dot chose Transylvania as the most 
mysterious and unpredictable place.
But to their great regret, the leave turned to be very short, so it will be 
enough to visit one of the three above named places. That's why Yakko,
as the cleverest, came up with a truly genius idea: let each of the three 
roll an ordinary six-sided die, and the one with the highest amount of points will be the winner, and will take the other two to the place of his/her dreams.
Yakko thrown a die and got Y points, Wakko — W points. It was Dot's turn. 
But she didn't hurry. Dot wanted to know for sure what were her chances to 
visit Transylvania.
It is known that Yakko and Wakko are true gentlemen, that's why if they have 
the same amount of points with Dot, they will let Dot win.

input 4 2
output 1/2

*/
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

