#include <bits/stdc++.h>
using namespace std;
#define MN 110

int a[MN][MN];
int c[MN];
int s;

int maxrect(){
	stack <int> st;
	int maxarea = 0, area = 0, i;

	for(i = 0; i < s; ){
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
					
		int block = 0;
		scanf("%d ", &s);
		scanf("%d ", &block);
		
		for(int i = 0; i < s; i++)
			for(int j = 0; j < s; j++)
				a[i][j] = 1;
		
		int r1,c1,r2,c2;
		for(int i = 0; i < block; i++){
			scanf("%d %d %d %d ", &r1, &c1, &r2, &c2);
			for(int i = r1-1 ; i <= r2-1; i++)
				for(int j = c1-1; j <= c2-1; j++)
					a[i][j] = 0;
		}

		int ans = 0;
		memset(c, 0, sizeof(c));
		for(int i = 0; i < s; i++){
			for(int j = 0; j < s; j++){
				if(a[i][j]==0){c[j]=0;}
				else{c[j]+=a[i][j];}
				
			}

			ans = max (ans,maxrect());
		}
		cout<<ans<<endl;

	}
	return 0;	
}
