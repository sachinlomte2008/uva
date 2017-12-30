#include <bits/stdc++.h>
using namespace std;
int m,n;

int minkey(vector<int>key,vector<int>set){
	
	int min1=INT_MAX,minindex;
	for(int i=1;i<=m;i++){
		if(!set[i] && min1 > key[i]){
			min1=key[i];
			minindex=i;
		}
	}	
	return minindex;
}

int main(){
  int counter=0;	
	while(scanf("%d%d",&m,&n)==2 && (m!=0 && n!=0)){
		int graph[m+1][m+1];

		for(int i=0;i<=m;i++)
			for(int j=0;j<=m;j++)
				graph[i][j]=0;

		for(int i=0 ; i<n ; i++){
			int u,v,w;
			scanf("%d %d %d",&u,&v,&w);
			graph[u][v]=w;
			graph[v][u]=w;
		}

	//	cout<<"hello "<<endl;
		vector<int >key(m+1,INT_MAX);
		vector<int >set(m+1,0);
//		cout<<"awdawd"<<endl;
		key[1]=0;
		for(int i=0;i<m-1;i++){
			int u=minkey(key,set);
			set[u]=1;
			
			for(int j=1;j<=m;j++){
				if(graph[u][j] && !set[j] && key[u]!=INT_MAX && key[j] > key[u]+graph[u][j] ){
					key[j] = key[u] + graph[u][j];
				}
			}
		}

		double max1=0;
		vector<int> ans;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=m;j++){
	
				if(graph[i][j]){

					double temp = (key[i] + key[j] +graph[i][j]) /2.0;
					if(temp > max1){
						max1=temp;
						
						if(temp==key[i] || temp==key[j]){
							ans.clear();
							if(temp==key[i])
								ans.push_back(i);
							else
								ans.push_back(j);
						}
						else{
							ans.clear();
							ans.push_back(i);
							ans.push_back(j);
						}
					
					}
				
				}
			}
		}
		
	
		cout<<"System #"<<++counter<<endl;
		if(ans.size()==1)
			printf("The last domino falls after %.1f seconds, at key domino %d.\n\n",max1,ans[0]);
		else
			printf("The last domino falls after %.1f seconds, between key dominoes %d and %d.\n\n",max1,ans[0],ans[1]);
	}
	return 0;
}
