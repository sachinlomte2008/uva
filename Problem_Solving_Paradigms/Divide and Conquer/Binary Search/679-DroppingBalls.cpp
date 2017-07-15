#include <bits/stdc++.h>
using namespace std;
int max_node;

int bin_search(int node,int balls){
	int left=2*node;
	int right=2*node+1;
	if(left < ::max_node && right < ::max_node){
		if(balls%2==0)
			return bin_search(right,balls/2);
		else
			return bin_search(left,balls/2+1);
	}
	else
		return node;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int d,b;
		cin>>d>>b;
		::max_node=pow(2,d);
		cout<<bin_search(1,b)<<endl;		
	}
}
