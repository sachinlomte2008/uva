#include <bits/stdc++.h>
using namespace std;
#define MN 10000000
int a[MN];
int dp[MN];

int main() {
	
	int x = 0, maxer = INT_MIN;
	while (scanf("%d", &a[x]) == 1) x++;
	for (int i = 0; i < x; i++) dp[i] = 1;

	for (int i = 1; i < x; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}
	}
	
	for(int  i = 0; i < x; i++) maxer = max(maxer,dp[i]);
	printf("%d\n-\n", maxer);

	vector<int> v;
	int temp = INT_MAX;
	for (int i = x-1; i >= 0; i--) {
		if(dp[i] == maxer && a[i] < temp){
			v.push_back( a[ i ] );
			if(maxer == 1)break;
			maxer--;
			temp = a[ i ];
		}
	}

	for(int i=v.size()-1; i>=0 ; i--) 
		printf("%d\n", v[i]);

	return 0;	
}
