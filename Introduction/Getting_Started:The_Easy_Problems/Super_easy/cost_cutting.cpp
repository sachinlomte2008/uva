//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2827
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		int ans;
		if((b>a && c<a) || (b<a && c>a))
			ans=a;
		
		if((a>b && c<b) || (a<b && c>b))
			ans=b;

		if((a>c && b<c) || (a<c && b>c))
			ans=c;

		cout<<"Case "<<i<<": "<<ans<<endl;
	}
	return 0;
}
