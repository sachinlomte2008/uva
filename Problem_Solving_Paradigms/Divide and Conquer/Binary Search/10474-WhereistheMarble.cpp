#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	int ca=1;
	while( scanf(" %d%d",&n,&q)==2){
		if(n==0 && q==0)break;

		printf("CASE# %d:\n",ca);
		ca++;
		int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",arr+i);
		
		sort(arr,arr+n);
	
		while(q--){
			int lo=0,hi=n-1;
			int num,ind=-1;
			cin>>num;
			
			while(lo<=hi){
				int mid=lo+(hi-lo)/2;
				
				if(arr[mid]==num){
					ind=mid;
					hi=mid-1;
				}
				else if(arr[mid]<num)
					lo=mid+1;
				else
					hi=mid-1;
			}
			if(ind==-1)
				printf("%d not found\n",num);
			else
				printf("%d found at %d\n",num,ind+1);
		}

	}
	return 0;
}
