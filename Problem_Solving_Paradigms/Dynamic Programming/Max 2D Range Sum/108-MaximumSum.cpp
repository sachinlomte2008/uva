#include <bits/stdc++.h>
using namespace std;
long long int a[200][200];
int n;

long long int kadens(long long int b[]){

	long long int curr_max=b[0],maxer=b[0];

	for(int i=1;i<n;i++){
		curr_max=max(curr_max + b[i] , b[i] );
		maxer=max(maxer,curr_max);
	}

	return maxer;
}

int main(){

	while(scanf("%d ",&n)==1){
		//printf("%d : ",n);
		long long temp_ans=LLONG_MIN;
		long long ans = LLONG_MIN;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d ",&a[i][j]);
				temp_ans=max(a[i][j],temp_ans);
			}
		}

		if(temp_ans<0)
			cout<<temp_ans<<endl;
		else{
			for(int i=0;i<n;i++){

				long long int temp[n];
				memset(temp,0,n*sizeof(long long int));

				for(int j=i;j<n;j++){
					for(int k=0;k<n;k++){

						temp[k]+=a[k][j];
						long long int t_ans= kadens(temp);
						ans=max(ans,t_ans);
					}
				}
			}

			cout<<ans<<endl;
		}
	}
	return 0;	
}
