#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,g;cin>>t;
	while(t--){
		
		int ans=0;
		cin>>n;
		int *wt=new int[n];
		int *val=new int[n];

		for(int i=0;i<n;i++){
			cin>>val[i]>>wt[i];
		}
		
		int k[n+1][31];
		for(int i=0;i<=n;i++){
			for(int w=0;w<=30;w++){

				if( i==0 || w==0 )k[i][w]=0;
				else if(wt[i-1]<=w){
					k[i][w]=max( val[i-1]+k[i-1][w-wt[i-1]], k[i-1][w]);
				}
				else
					k[i][w]=k[i-1][w];

			}
		}

		cin>>g;
		for(int i=0;i<g;i++){
			int x;cin>>x;
			ans+=k[n][x];
		}
		cout<<ans<<endl;

	}
	return 0;	
}
