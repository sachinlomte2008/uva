//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=640&page=show_problem&problem=868
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		long long ct,d,k;
		cin>>ct;
		ct++;
		
		vector<long long >vi;
	
		for(int i=0;i<ct;i++){
			long long x;
			cin>>x;
			vi.push_back(x);
		}
	
		cin>>d>>k;
		
		long long temp=0;
		long long term=0;

		while(temp<k){
			term++;
			temp=temp+term*d;
		}
		
		long long ans=0;

		for(unsigned int i=0;i<vi.size();i++){
			ans+=vi[i]*(long long)pow(term,i);
		}
		
		cout<<ans<<endl;
	
	}
	return 0;
}
