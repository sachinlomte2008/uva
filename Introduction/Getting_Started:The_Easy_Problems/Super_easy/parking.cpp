//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2349
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	while(n--){
		int num;
		cin >> num;
		int low=100,high=-1;
		
		for(int i=0 ; i<num ; i++){
			int x;
			cin>>x;
			if(x<=low)
				low=x;
			if(x>=high)
				high=x;
		}		

			cout<<2*(high-low)<<endl;
	}
return 0;
}
