#include <bits/stdc++.h>
using namespace std;


void dfs(int s, int visited[],list<int> *adj){
	//visited[s]=1;
	list<int>::iterator i;
	for(i=adj[s].begin() ; i!=adj[s].end() ; i++){\
		if(!visited[*i]){
			visited[*i]=1;
			dfs(*i,visited,adj);
		}	
	}
}

int main(){
	int n;
	while(scanf("%d",&n)==1 && n!=0){
		list<int> *adj = new list<int>[n+1];
		int u;
		while(scanf("%d",&u) && u!=0){
			
			int x;
			while(scanf("%d",&x) && x!=0){
				adj[u].push_back(x);
			}

		}

		int tests;cin>>tests;
		//cout<<"RRRRRRRRRRRRRrr "<<tests<<endl;
		for(int i=0;i<tests;i++){
			
			int visited[n+1];
			fill(visited,visited+(n+1),0);
			
			int z;cin>>z;
			dfs(z,visited,adj);
			
			int count=0;
			for(int i=1;i<=n;i++){
				if(!visited[i])
					count++;
			}
			cout<<count;
			for(int i=1;i<=n;i++){
				if(!visited[i])
					cout<<" "<<i;
			}
			cout<<endl;
		
		}

	}
	return 0;	
}
