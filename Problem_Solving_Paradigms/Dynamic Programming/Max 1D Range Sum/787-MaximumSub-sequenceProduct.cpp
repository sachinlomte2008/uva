#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000
long long int arr[MAXN];

int main(){
	int N;
	
	while(N = 0, scanf ("%lld", arr + N++) == 1){		
		
		while (scanf ("%lld", arr + N) && arr[N] != -999999)
			N++;
		

		long long  maxer=INT_MIN;
		for(int i = 0; i < N; i++){
			//cout << "rr "<<arr[i];
			long long int t_m = 1;
			for(int j = i; j < N; j++){
				t_m *= arr[j];
				maxer = max(t_m, maxer);
			}
			
			maxer = max(t_m, maxer);
		}
		cout<<maxer<<endl;
	}
	return 0;
}
