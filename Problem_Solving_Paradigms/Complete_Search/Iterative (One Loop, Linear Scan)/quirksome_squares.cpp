//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=640&page=show_problem&problem=192
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void squares(){
	for(int i=0;i<=10000;i++){
		a.push_back(i*i);
	}	
}


int main(){
	squares();
	while(scanf("%d",&n)==1){
		for(unsigned int i=0 ; i<a.size(); i++){
			if(a[i]>=(int)pow(10,n))break;
			
			if(pow(a[i]%(int)pow(10,n/2)+a[i]/(int)pow(10,n/2),2)==a[i]){
				cout<<setw(n)<<setfill('0')<<a[i]<<endl;
			}
		}
	}
	return 0;
}
