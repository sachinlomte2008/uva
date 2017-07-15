//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=3431
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,count=1;
	
	while(scanf("%d",&n)){
		if(n==0)break;

		int zero=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x==0)zero++;
		}
		
		cout<<"Case "<<count<<": "<<n-zero-zero<<endl;
		count++;
	}
	return 0;
}
