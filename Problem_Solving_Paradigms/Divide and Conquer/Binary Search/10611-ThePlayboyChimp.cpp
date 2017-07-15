#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin>>n;
	vector<int >vi;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		vi.push_back(x);
	}

	cin>>q;
	int x;
	while(q--){
		cin>>x;
		int first=-1,last=-1;
		auto it1=lower_bound(vi.begin(),vi.end(),x);
		if(it1!=vi.end()){
			auto in=it1-vi.begin();
			if(in!=0)first=vi[in-1];
		}
		else
			first=vi[n-1];
	
		auto it2=upper_bound(vi.begin(),vi.end(),x);
		if(it2!=vi.end()){
			last=*it2;
		}

		if(first!=-1)cout<<first<<" ";
		else cout<<'X'<<" ";
				
		if(last!=-1)cout<<last<<endl;
		else cout<<'X'<<endl;
	}
	return 0;
}
