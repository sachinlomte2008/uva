#include <bits/stdc++.h>
#define MX 105
using namespace std;

char str[MX][MX];
int v[MX][MX];
int row, col;

int rx[] = { 0, 1, 1, 1, 0,-1,-1,-1};
int ry[] = { 1, 1, 0,-1,-1,-1, 0, 1};

int dfs(int x, int y){
	
	int count = 1;
	v[x][y] = 1;
	
	for(int i=0; i<8 ;i++){	
		int x1 = x+rx[i];
		int y1 = y+ry[i];
		if(x1>=0 && y1>=0 && x1<row && y1<col){
			if(!v[x1][y1] && str[x1][y1]=='W')
				count+=dfs(x1,y1);
		}
	}

	return count;
}

void dfs2(int x, int y, int count){
	v[x][y] = count;
	for(int i=0; i<8 ;i++){	
		int x1 = x+rx[i];
		int y1 = y+ry[i];
		if(x1>=0 && y1>=0 && x1<row && y1<col){
			if(v[x1][y1] == 1)
				dfs2(x1,y1,count);
		}
	}
}

int main(){
	int t;scanf("%d ",&t);
	char s[104];
	while(t--){
		
		row = 0, col = 0;
		memset(v, 0, sizeof(v));
		while(fgets(s, 104, stdin) && s[0] > 'A'){
			s[col = strcspn (s, "\n")] = 0;
			//cout<<s<<" "<<col<<endl;
			strcpy(str[row++], s);
		}
		
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++ ){
				int cnt = 0;
				if(!v[i][j] && str[i][j]=='W'){
					cnt = dfs(i,j);
					v[i][j] =cnt;
				}
			}				
		}


		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++ ){
				if(v[i][j]>1){
					dfs2(i,j,v[i][j]);
				}
			}
		}	

		//for(int i = 0; i < row; i++){
		//	for(int j = 0; j < col; j++ ){
		//		cout<<v[i][j]<<" ";
		//	}
		//	cout<<endl;
		//}	
		
		do{
			int x, y;
			sscanf(s, "%d %d",&x,&y);
			cout<<v[x-1][y-1]<<endl;
		}
		while(fgets(s, 104, stdin) && s[0]!='\n');
		
		if(t!=0)cout<<endl;
	}

 	return 0;
}
