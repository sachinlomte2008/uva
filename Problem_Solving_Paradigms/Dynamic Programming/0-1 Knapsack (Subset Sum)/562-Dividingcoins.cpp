#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,sum;cin>>t;
	while(t--){
		
		sum=0;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++){cin>>a[i]; sum+=a[i] ;}
		
		int k[n+1][sum/2+1];
		
		for(int i=0;i<=n;i++){
			for(int w=0;w<=sum/2;w++){
				
				if(i==0 || w==0)k[i][w]=0;
				
				else if( a[i-1] <= w )
					k[i][w]=max( a[i-1] + k[i-1][ w-a[i-1] ] , k[i-1][w]);
					
				else
					k[i][w]=k[i-1][w];
			}
		}
		cout<<sum-2*k[n][sum/2]<<endl;
	}	
}
