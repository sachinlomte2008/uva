#include <bits/stdc++.h>
using namespace std;

int m,n;
int map[30][30],ans;

void dfs(int point,int len){
	if(len>ans){
		ans=len;
	}

	for(int i=0;i<n;i++){
		if(::map[point][i]){
			::map[point][i]=0;
			::map[i][point]=0;
			dfs(i,len+1);
			::map[point][i]=1;
			::map[i][point]=1;
		}
	}
}

int main(){
	while(scanf("%d%d",&n,&m)==2){
		if(n==0&&m==0)break;
		memset(::map,0,sizeof(::map));
		for(int i=0;i<m;i++){
			int x,y;cin>>x>>y;

			::map[x][y]=1;
			::map[y][x]=1;
		}
		
		
		for(int i=0;i<n;i++){
			dfs(i,0);
		}
		printf("%d\n",ans);

	}
	return 0;
}
