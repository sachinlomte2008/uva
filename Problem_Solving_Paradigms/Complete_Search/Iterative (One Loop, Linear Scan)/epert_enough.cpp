#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<string > vs;
		vector<vector<int> > vvi;
		while(n--){
			string s;
			cin>>s;
			vs.push_back(s);
			int a , b ;
			cin>>a>>b;
			vector<int> temp;
			temp.push_back(a);
			temp.push_back(b);
			vvi.push_back(temp);
		}

	
		int t;
		cin>>t;
		while(t--){
			int x;
			cin>>x;
			vector<int >ans;
			for(unsigned int i=0; i<vvi.size() ; i++){
				if(x>=vvi[i][0] && x<=vvi[i][1]){
					ans.push_back(i);
				}
			}

			if(ans.size()==0 || ans.size()>1){
				cout<<"UNDETERMINED"<<endl;
			}
			else{
				cout<<vs[ans[0]]<<endl;
			}
		}	
	}
	return 0;
}
