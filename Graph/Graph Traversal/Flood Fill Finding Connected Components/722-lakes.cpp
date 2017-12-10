#include <bits/stdc++.h>
#define MN 110
using namespace std;
char a[MN][MN];
int b[MN][MN];
int vis[MN][MN];
int x, y;
int m,n;

int dx[]={0, 1, 0,-1};
int dy[]={1, 0,-1, 0};

int flood_fill(int x, int y){
	if(a[x][y]=='1')return 0;
	vis[x][y]=1;
	int count=1;

	for(int i=0; i<4; i++){
		if(x+dx[i]>=0 && x+dx[i]<m && y+dy[i]>=0 && y+dy[i]<n){
		if(a[x+dx[i]][y+dy[i]]=='0' && !vis[x+dx[i]][y+dy[i]]){
			count+=flood_fill(x+dx[i], y+dy[i]);
		}
		}
	}

	return count;
}

int main(){
	int T;
	scanf("%d ",&T);
	
	while(T--) {
	
		scanf("%d %d ",&x,&y);
		x-=1;y-=1;

		//cout<<x<<" "<<y<<endl;
		m=0;
		while(fgets(a[m],MN*sizeof(char),stdin) && (a[m][0]!='\n'||a[m][0]==' ')) m++;
		n=strcspn(a[0],"\n");
		memset(vis,0,sizeof(vis));

		int ans=0;
		if(x>=m || y>=n)ans=0;
		else ans = flood_fill(x, y);
		
		cout<<ans<<endl;
		if(T!=0)cout<<endl;
		//for(int i=0; i<m; i++)printf("%s",a[i]);
	}
	return 0;	
}
