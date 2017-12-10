#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define MX 105
using namespace std;

char str[MX][MX];
int v[MX][MX];
int row, col;

int rx[] = { 0, 1, 1, 1, 0,-1,-1,-1};
int ry[] = { 1, 1, 0,-1,-1,-1, 0, 1};

void dfs(int x, int y){

	v[x][y] = 1;
	
	for(int i=0; i<8 ;i++){	
		int x1 = x+rx[i];
		int y1 = y+ry[i];
		if(x1>=0 && y1>=0 && x1<row && y1<col){
			if(!v[x1][y1] && str[x1][y1]=='@')
				dfs(x1,y1);
		}
	}
}

int main(){
	
	char s[104];
	
	while( scanf("%d %d ",&row,&col)){
		
		//cout<<row<<" "<<col<<endl;
		
		if(row == 0 && col == 0)break;
		memset(v, 0, sizeof(v));
		
		for (int i = 0; i < row; i++){
			fgets(s, 104, stdin);
			s[col = strcspn (s, "\n")] = 0;
			strcpy(str[ i ], s);
		}

		//for(int i=0 ;i<row;i++)
		//	printf("%s\n",str[i]);
		
		int ans=0;
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++ ){
				if(!v[i][j] && str[i][j]=='@'){
					dfs(i,j);
					ans++;
				}
			}				
		}
		cout<<ans<<endl;
	}
 	return 0;
}
