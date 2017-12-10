#include <bits/stdc++.h>
using namespace std;

int m,n,init;
int main(){

	while(scanf("%d %d %d",&m,&n,&init)==3){
		if(m==0&&n==0&&init==0)break;

		char adj[m+1][n+1];
		int ans[m+1][n+1];

		memset(ans,0,(m+1)*(n+1)*sizeof(int));

		for(int i=1;i<=m;i++){
			scanf("%s",adj[i]);
		}

		int step=0,i=1,j=init-1;
		int A=-1,B=-1;
		while(i<=m && i>=1 && j<n && j>=0){
			step++;
			if(ans[i][j]!=0){
				A=ans[i][j]-1;
				B=step-ans[i][j];
				break;
			}
			ans[i][j]=step;

			if(adj[i][j]=='E')j+=1;
			else if(adj[i][j]=='N')i-=1;
			else if(adj[i][j]=='W')j-=1;
			else i+=1;
		}
		
		if(A!=-1&&B!=-1)cout<<A<<" step(s) before a loop of "<<B<<" step(s)"<<endl;
		else cout<<step<<" step(s) to exit"<<endl;
	}
	return 0;
}
