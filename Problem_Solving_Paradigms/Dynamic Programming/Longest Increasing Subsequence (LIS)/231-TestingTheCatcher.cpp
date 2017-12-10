#include <bits/stdc++.h>
using namespace std;
#define MN 1000000
int a[ MN ];
int n;

int reverse_LIS() {
	int ans = 1 , an_len = 0;
	int b[ n ];
	vector < int > answer;

	for(int i = 0; i < n; i++ )b[ i ] = a[ n - 1 - i];

	for(int i = 0; i < n; i++ ) {
		if(i == 0){answer.push_back(b[ i ]);an_len++;}
		else{
			if(b[ i ] > answer[ an_len - 1 ]){
				answer.push_back(b[i]);
				an_len ++;
			}
			else{
				vector <int> :: iterator it;
				it = upper_bound (answer.begin(), answer.end(), b[i]);
				answer[ it - answer.begin() ] = b[ i ];
			}
		}
		ans = max(ans, an_len);
	}

	return ans;
} 

int main(){
	int x, ca = 1;
	while(scanf("%d", &x)==1 && x!=-1){

    a[ 0 ] = x, n = 1;
		while(scanf("%d", &x)==1 && x!=-1)a[ n++ ] = x;

		int ans = reverse_LIS();
		if(ca != 1)cout << endl;
		cout << "Test #"<< ca << ":" << endl;
		cout << "  maximum possible interceptions: "<< ans << endl;
		ca ++;
}
	return 0;
}
