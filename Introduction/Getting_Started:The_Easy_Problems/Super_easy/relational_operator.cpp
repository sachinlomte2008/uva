//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=2113

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int x, y;
		cin >> x>> y;
		if(x==y)
			cout<<"="<<endl;
		else if(x<y)
			cout<<"<"<<endl;
		else
 			cout<<">"<<endl;
	}

 return 0;
}
