#include <bits/stdc++.h>
using namespace std;
#define MN 1000000
int anss[MN], n = 0;

void printa(vector<int>& b){
		int new_n = b.size();

		for(int i=0; i< new_n;i++ )cout<<b[i]<<" ";
		cout<<endl;

		if(new_n > n){
			n = new_n;
   		for(int i = 0; i < n; i++)anss[ i ] = b[ i ];
		}	
}

int CeilIndex(std::vector<int> &v, int l, int r, int key) {
	while (r-l > 1) {
	int m = l + (r-l)/2;
	if (v[m] >= key)
		r = m;
	else
		l = m;
	}

	return r;
}

int LongestIncreasingSubsequenceLength(std::vector<int> &v) {
	if (v.size() == 0)
		return 0;

	std::vector<int> tail(v.size(), 0);
	int length = 1; // always points empty slot in tail

	tail[0] = v[0];
	for (size_t i = 1; i < v.size(); i++) {
	 
		if (v[i] < tail[0])
			tail[0] = v[i];
		else if (v[i] > tail[length-1])
			tail[length++] = v[i];
		else
			tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
		
		printa(tail);
	}

	return length;
} 



int main(){
	vector <int> a;
	int x;
	while(scanf("%d", &x) == 1 ){
		if( find(a.begin(), a.end(), x)!=a.end() ){}
		else a.push_back(x);
	}	
	
	int ans_l = LongestIncreasingSubsequenceLength(a);
	
	cout<< ans_l << endl << "-" << endl;
	for(int i = 0; i < ans_l; i++)cout<<anss[ i ]<< endl;
	return 0;
}
