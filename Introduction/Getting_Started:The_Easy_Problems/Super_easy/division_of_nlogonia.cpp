//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2493

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)){

		if(n==0)break;
		int x,y;
		cin>>x>>y;

		for(int i=0; i<n ;i++){
			int a,b;
			cin>>a>>b;
			
			if(x==a || y==b){
				cout<<"divisa"<<endl;
				continue;
			}
			else if(a>x){
				if(b>y)
					cout<<"NE"<<endl;
				else
					cout<<"SE"<<endl;
			}
			else{	
				if(b>y)
					cout<<"NO"<<endl;
				else
					cout<<"SO"<<endl;
			}
			
		}
	}
return 0;
}
