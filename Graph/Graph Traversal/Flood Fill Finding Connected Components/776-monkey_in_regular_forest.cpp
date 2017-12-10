#include <bits/stdc++.h>
#define MN 1000
using namespace std;

char a[MN][MN];
int vis[MN][MN];
int width[MN];
char col;
int mark;

void dfs( int u, int v) {
	vis[u][v] = mark;
	
	for(int i = u-1; i <= u+1; i++){
		for(int j = v-1; j<= v+1; j++){
			if(!vis[i][j] && a[i][j] == col)
				dfs(i, j);
		}
	}
}

int main() {
	int cont = 1;

	while(cont){
		int m = 1, n, c, j;
		char *p;
		mark = 0;

		while((p = fgets ( a[m] + 1, MN, stdin)) && a[m][1] != '%'){
			for(c = j = 1; a[m][c] && a[m][c] != '\n' ; c++){
				if(a[m][c]!=' ')
					a[m][j++] = a[m][c];
			}

			n = j - 1;
			m++;
		}
		m--;

		for( int i = 0; i <= m+1; i++)
			a[i][0] = a[i][n+1] = 0;

		for( int i = 0; i <= n+1; i++ )
			a[0][i] = a[m+1][i] = 0;
		
		for( int i = 0; i <= n+1; i++)
			width[i] = 1;

		for( int i = 0; i <= m+1; i++)
			for(int j = 0; j <= n+1; j++)
				vis[i][j]=0;

		for(int i = 1; i <= m; i++ )
			for(int j = 1; j <= n; j++)
				if(!vis[i][j]){
					mark++;
					col = a[i][j];
					dfs( i,j );
				}
	
		for(int i=1; i<=m; i++){
			for(int j=1; j<=n; j++){
				
				int x = vis[i][j],d = 0;
				while(x){
					x/=10;
					d++;
				}
				
				width[j] = max(width[j],d);
			}
		}
			
		for( int i = 1; i <= m; i++){
			char sep[2] = {'\0', '\0'};
			for(int j = 1; j <= n; j++){
				printf("%s%*d", sep, width[j],vis[i][j]),sep[0] = ' ';
			}
			cout<<endl;
		}
		cout<<"%"<<endl;	
		if(p==NULL)break;
	}
	return 0;	
}
