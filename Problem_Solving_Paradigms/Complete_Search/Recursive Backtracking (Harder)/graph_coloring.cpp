#include <bis/stdc++.h>
using namespace std;

int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		int n,k;
		scanf("%d%d",&n,&k);
		vector<vector<int > >vii(n);
		
		for(int i=0;i<k;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			vii[x].push_back(y);
			vii[y].push_back(x);
		}
		
		vector<int >v(n,0);

		for(int i=0;i<n;i++){
			
		}

	}
	return 0;
}
