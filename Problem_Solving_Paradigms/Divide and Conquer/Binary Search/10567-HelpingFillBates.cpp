#include <bits/stdc++.h>
using namespace std;

vector<vector<int > >vvi(256);
int main(){

	string ss;
	cin>>ss;
	int len=ss.length();

	for(int i=0;i<len;i++){
		vvi[ss[i]].push_back(i);
	}

	int n;
	cin>>n;

	while(n--){
		string st;
		cin>>st;
		int l=st.length();
		int first=-1,last=-1,p=-1,flag=0;

		for(int i=0;i<l;i++){
			auto it=lower_bound(vvi[st[i]].begin(),vvi[st[i]].end(),p+1);
			
			if(it==vvi[st[i]].end()){
				flag=1;
				break;
			}
			p=*it;

			if(first==-1)
				first=p;
			last=p;
		}

		if(flag)cout<<"Not matched"<<endl;
		else{
			cout<<"Matched "<<first<<" "<<last<<endl;
		}		
	}

	return 0;
}
