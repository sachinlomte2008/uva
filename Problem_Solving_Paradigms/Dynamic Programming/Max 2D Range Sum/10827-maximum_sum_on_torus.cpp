#include <bits/stdc++.h>
using namespace std;

int kadens(int a[], int n){
	int maxer = a[0], curr_max = a[0];
	for(int i = 1; i < n; i++){
		curr_max = max(curr_max + a[i], a[i]);
		maxer    = max(maxer , curr_max);
	}
	return maxer
}

int main(){
	
	

	return 0;
}
