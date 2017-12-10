#include <bits/stdc++.h>
using namespace std;

bool vis[30];
vector <int> adj[30];

void dfs (int s){
	vis[s]=1;
	for(vector<int>::iterator it=adj[s].begin(); it!=adj[s].end(); it++){
		if(!vis[*it])
			dfs(*it);
	}
}

int main(){
	int t;
	scanf ("%d ", &t);
	
	while(t--){
		
		char s[108];
		fgets (s, 104,stdin);
		int n = s[0]-'A'+1;
		memset(vis, 0 ,sizeof(vis));
		for(int i=0; i < n; i++) adj[i].clear();

		while (fgets(s, 104, stdin) && s[0] != '\n'){
			int l;
			s[l = strcspn (s, "\n")] = 0;
			int x = s[0]-'A';
			int y = s[1]-'A';
			//cout<<x<<" "<<y<<endl;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}

		int ans=0;
		for(int i=0; i < n; i++){
			if(!vis[i]){
				ans++;
				dfs (i);
			}
		}
		
		cout<<ans<<endl;
		if(t)cout<<endl;
		
	}

	return 0;
}
