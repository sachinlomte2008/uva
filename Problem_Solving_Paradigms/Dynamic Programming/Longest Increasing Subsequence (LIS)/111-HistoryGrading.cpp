#include <bits/stdc++.h>
using namespace std;
int w[22],h[22],ans[22][22];
int n;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	
	int x;
	while( 1 ){
		for(int i=1;i<=n;i++){
			if(scanf(" %d ",&x)!=1) return 0;
			h[i]=x;
		}

		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(h[i]==w[j]){
					ans[i][j]=ans[i-1][j-1]+1;
				}
				else{
					ans[i][j]=max(ans[i-1][j] , ans[i][j-1]);
				}
			}
		}
		cout<<ans[n][n];
		printf("\n");
	}
	return 0;
}
