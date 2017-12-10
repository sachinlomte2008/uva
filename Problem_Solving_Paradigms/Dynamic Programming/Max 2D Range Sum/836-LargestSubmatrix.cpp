#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int a[30][30];
char b[30][30];
int c[30];
int n;

int maxrect(){
	stack <int> st;
	int maxarea = 0, area = 0, i;

	for(i = 0; i < n; ){
		if(st.size() == 0 || c[i] >= c[st.top()]){
			st.push(i++);
		}
		else{
			int top = st.top();st.pop();
			if(st.size() == 0)area = c[top] * i;
			else area=c[top]*(i-st.top()-1);
			maxarea = max (maxarea, area);
		}
	}
	while(st.size() != 0){
			
			int top = st.top();st.pop();
			if(st.size() == 0)area = c[top] * i;
			else area=c[top]*(i-st.top()-1);
			maxarea = max (maxarea, area);
	
	}
	return maxarea;
}

int main(){
	
	int t;
	scanf("%d ",&t);
	
	while(t--){
		
		int ct = 0;
		while(fgets(b[ct],27*sizeof(char),stdin) && b[ct][0]!='\n'){
			ct++;
		}
		n=ct;
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				a[i][j] =(int)b[i][j] - 48;
			}
		}
	
		int ans = 0;
		memset(c, 0, sizeof(c));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(a[i][j]==0){c[j]=0;}
				else{c[j]+=a[i][j];}
				
			}

			ans = max (ans,maxrect());
		}
		cout<<ans<<endl;
		if(t!=0)cout<<endl;

	}
	return 0;	
}
