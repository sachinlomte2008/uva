#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000
long long int arr[MAXN];

int main(){
	int N;// i;
	//char sep[2];

	while(N = 0, scanf ("%lld", arr + N++) == 1){		
		while (scanf ("%lld", arr + N) && arr[N] != -999999)
			N++;
		
		//printf ("Array has %d element%c\n", N, N == 1 ? '\0' : 's');
		//sep[0] = sep[1] = 0;
		//for (i = 0; i < N; i++)
		//	printf ("%s%d", sep, arr[i]), sep[0] = ' ';
		//putchar ('\n');

		long long  maxer=INT_MIN;

		for(int i=0;i<N;i++){
			long long int t_m=arr[i];
			for(int j=i+1;j<N;j++){
				t_m*=arr[j];
				maxer=max(t_m,maxer);
			}
			maxer=max(t_m,maxer);
		}
		cout<<maxer<<endl;
	}
	return 0;
}
