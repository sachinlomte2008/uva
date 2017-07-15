#include<bits/stdc++.h>
using namespace std;
int a[20001];
int main(){
	int t;
	cin>>t;
	int route=1;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n-1;i++){
			cin>>a[i];
		}

		int curr_max=a[0],maxer=a[0];
		int start=0,end=0;
		int t_start=0;
		int in_diff=0;
		
		for(int i=1;i<n-1;i++){
			if(a[i]> curr_max+a[i]){
				t_start=i;
				curr_max=a[i];
			} else {
				curr_max += a[i];
			}

			if (curr_max > maxer) {
				maxer = curr_max;
				start = t_start;
				end = i;
				in_diff = end - start;
			}else if (curr_max == maxer) {
				maxer=curr_max;
				if(i-t_start > in_diff){
					start=t_start;
					end=i;
					in_diff=end-start;
				} else if (i-t_start == in_diff && t_start < start) {
					start = t_start;
					end = i;
					in_diff = end - start;
				}
			}
		}
	
		if(maxer<0){
			cout<<"Route "<<route<<" has no nice parts"<<endl;
		}
		else{
			cout<<"The nicest part of route "<<route<<" is between stops "<<start+1<<" and "<<end+2<<endl;
		}

		route++;
	}
	return 0;
}
