//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=2307
#include <bits/stdc++.h>
using namespace std;

int summer(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0)break;

		while(n/10)
			n=summer(n);

		cout<<n<<endl;
	}
	return 0;
}
