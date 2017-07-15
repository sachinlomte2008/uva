//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2542
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		int ans = x*315+36962;
		
		if(ans<0)
			ans=-ans;
	
		int temp=ans/10;
		cout<<temp%10<<endl;;
	}
	return 0;
}
