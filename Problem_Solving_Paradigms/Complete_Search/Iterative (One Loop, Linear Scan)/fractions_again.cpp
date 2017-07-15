#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;

	while(scanf("%d",&n)==1){
		cout<<n<<endl;
		for(int i =n+1 ; i<=2*n ; i++ ){
			if( (i*n) % (i-n) == 0 )
				cout<<"1/"<<n<<" = "<<"1/"<<(i*n)/(i-n)<<" + "<<"1/"<<i<<endl;
		}
	}

	return 0;
}
