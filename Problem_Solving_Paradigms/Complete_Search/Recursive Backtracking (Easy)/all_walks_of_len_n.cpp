#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[20][20];
bool vis[20];
int flag=22;

void printarray(int b[],int len){
	flag=11;
	cout<<"(";
	for(int i=0;i<=len;i++){
		if(i==len){cout<<b[i];break;}
		cout<<b[i]<<",";
	}
	cout<<")"<<endl;
}

void dfs(int point,int len,int path[]){
	path[len]=point;
	if(len==n){
		printarray(path,len);
		return;
	}

	for(int i=1;i<=m;i++){
		if(a[point][i]&&!vis[i]){
			vis[i]=true;
			dfs(i,len+1,path);
			vis[i]=false;
		}
	}
}

int main(){
	int dummy;
	while(scanf("%d%d",&m,&n)==2){
		int path[21];
		memset(vis,false,20*sizeof(int));
		memset(a,0,20*20*sizeof(int));
		for(int i=1;i<=m;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];	
			}
		}
		vis[1]=true;	
		dfs(1,0,path);
		if(flag==22)
			cout<<"no walk of length n"<<endl;
		flag=22;
		if(scanf(" %d",&dummy)!=1)break;
		else cout<<endl;
	}
	return 0;
}
