#include <bits/stdc++.h>
#define MAXN 202
using namespace std;
char a[MAXN][MAXN];
int visited[MAXN][MAXN];

int n;

int dfs(int i,int j){
	if(i==n)return 0;
	if(j==n-1)return 1;
	
	visited[i][j]=1;

	if(i+1<n && a[i+1][j]=='w' && visited[i+1][j]!=1)
		if(dfs(i+1,j))return 1;

	if(i+1<n && a[i+1][j+1]=='w'&&visited[i+1][j+1]!=1 )
		if(dfs(i+1,j+1))return 1;

	if(a[i][j+1]=='w'&&visited[i][j+1]!=1)
		if(dfs(i,j+1))return 1;
		
	if(j-1>=0 && a[i][j-1]=='w'&&visited[i][j-1]!=1 )
		if(dfs(i,j-1))return 1;

	if(i-1>=0 && j-1>=0 && a[i-1][j-1]=='w'&&visited[i-1][j-1]!=1)
		if(dfs(i-1,j-1))return 1;

	if(i-1>=0 && a[i-1][j]=='w'&&visited[i-1][j]!=1 )
		if(dfs(i-1,j))return 1;

	return 0;
}

int main(){
	int count=1;

	while(scanf("%d",&n)==1 && n!=0){
	
		for(int i=0 ; i<n ; i++){
			scanf("%s",a[i]);
		}

		char ansch='B';
		int j=0;
		memset(visited,0,n*n*sizeof(int));
		for(int i=0;i<n;i++){
			
			if(a[i][j]!='w')continue;
			if(visited[i][j])continue;
			if(dfs(i,j)){
				ansch='W';
				break;
			}
		}
		printf("%d %c\n",count,ansch) ;
		count++;
	}
	
	return 0;
}
