#include <bits/stdc++.h>
using namespace std;
int m,n,a[110][110];

int maxarea(int b[]){
	stack<int> st;
	int area=0,max1=0;
	int i=0;

	for(i=0;i<n;){
		if(st.empty() || b[st.top()]<=b[i] ){
			st.push(i++);
		}
		else{
			int in=st.top();st.pop();

			if(st.empty()){
				area=i*b[in];
			}
			else{
				area=b[in]*(i-st.top()-1);
			}

			max1=max(max1,area);
		}
	}

	while(!st.empty()){
			int in=st.top();st.pop();

			if(st.empty()){
				area=i*b[in];
			}
			else{
				area=b[in]*(i-st.top()-1);
			}

			max1=max(max1,area);
	}
	return max1;
}

int main(){
	while(scanf("%d%d",&m,&n)==2){
		if(m==0 && n==0)break;
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}

		int temp[n],ans=0;
		memset(temp,0,n*sizeof(int));
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]==1)temp[j]=0;
				else temp[j]+=1;
			}
			ans = max(maxarea(temp) , ans);
		}
		
		cout<<ans<<endl;

	}

	return 0;
}
