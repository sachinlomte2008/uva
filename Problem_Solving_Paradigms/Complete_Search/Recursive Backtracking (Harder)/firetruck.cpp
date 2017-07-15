#include <bits/stdc++.h>
using namespace std;
int ct;

void printarray(int s[],int len){
	for(int i=0;i<=len;i++){
		printf("%d ",s[i]);
	}
	cout<<endl;
	ct++;
}

void printpathrecur(int adj2[][22],int path[],int s,int d,vector<int> visited,int pathlen){
	
	if(s==d){
		printarray(path,pathlen);
		return;
	}
	
	else{
		for(int i=1;i<22;i++){
			if(adj2[s][i]==1 && visited[i]!=1){
				visited[i]=1;
				path[pathlen+1]=i;
				printpathrecur(adj2,path,i,d,visited,pathlen+1);
				visited[i]=0;
			}
		
		}
	}
}

void printpaths(int adj1[][22],int d){
	int path[22];
	path[0]=1;
	vector<int> visited(22,0);
	visited[1]=1;
	printpathrecur(adj1,path,1,d,visited,0);
}

int main(){
	int d;
	int case1=0;
	while(scanf(" %d",&d)==1){
		int x,y;
		ct=0;
		int adj[22][22];
		memset(adj,0,22*22*sizeof(int));

		while(scanf("%d%d",&x,&y)==2){
			if(x==0&&y==0)break;
			adj[x][y]=adj[y][x]=1;
		}

		printf("CASE %d:\n",++case1);
		
		printpaths(adj,d);
		printf("There are %d routes from the firestation to streetcorner %d.\n",ct,d);
		ct=0;
	}
	
	return 0;
}
