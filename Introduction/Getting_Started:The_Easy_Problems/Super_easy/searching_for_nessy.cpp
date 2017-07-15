//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=1985
#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	
	while(n--){
		int x , y ;
		int ans1,ans2;
		cin>>x>>y;
		
		if(x==0||y==0){
			cout<<"0"<<endl;
			continue;	
		}
		if(x==1 || x==2 ||x==3)
			ans1=1;
		else
			ans1=x/3;

	
		if(y==1 || y==2 ||y==3)
			ans2=1;
		else 
			ans2=y/3;

		cout<<ans1*ans2<<endl;
	}

return 0;
}
