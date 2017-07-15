//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=3794
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count=1;

	while(n--){
		int x,y,z;
		cin>>x>>y>>z;
		if(x>20||y>20||z>20)
			cout<<"Case "<<count<<": bad"<<endl;
		else
			cout<<"Case "<<count<<": good"<<endl;

		count++;				
	}
	return 0;
}
