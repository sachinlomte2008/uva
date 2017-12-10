#include <bits/stdc++.h>
using namespace std;
int w[22],h[22],ans[22][22];
int n;

int main(){
	while(scanf("%d", &n) == 1){
		cout<<"n : "<< n <<endl;
		for(int i = 1;i <= n; i++){
			cin >> w[i];
		}
		
		for(int i = 1;i <= n; i++)cout<<w[i]<<" ";
		cout<<endl;
			
		int x;
		while( 1 ){
			if(scanf("%d", &x) != 1)break;
			
			h[1] = x;
			for(int i = 2; i <= n; i++){
				scanf(" %d ", &x);
				h[i] = x;
			}

			for(int i=0;i<=n;i++){
				for(int j=0;j<=n;j++){

					if(i==0 || j==0){ans[i][j] = 0; continue;}
					
					if(h[i]==w[j])
						ans[i][j]=ans[i-1][j-1]+1;
					else
						ans[i][j]=max(ans[i-1][j] , ans[i][j-1]);
				}
			}
			cout << ans[n][n];
			printf("\n");
		}
	}	
	return 0;
}
