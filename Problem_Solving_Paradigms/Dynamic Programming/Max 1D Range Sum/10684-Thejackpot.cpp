#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	int arr[1000000];

	while(scanf("%d",&n)==1){
			if(n==0)break;
			
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}

			int curr_max=arr[0],maxer=arr[0];
			for(int i=1;i<n;i++){
				curr_max=max(curr_max+arr[i],arr[i]);
				maxer   =max(maxer,curr_max);
			}

			if(maxer>0)
				cout<<"The maximum winning streak is "<<maxer<<"."<<endl;
			else
				cout<<"Losing streak."<<endl;
	}

	return 0;
}
