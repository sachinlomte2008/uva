//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=3834
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int amt=0;
	while(n--){
		char query[20];
		int x;
		scanf("%s",query);
		
		if(strcmp(query,"donate")==0){
			cin>>x;
			amt+=x;
		}
		else{
			cout<<amt<<endl;
		}
		
	}
	return 0;
}
