#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool num[1000000];
vector<int> prime;
vector<int> eagly;
int main() {
	memset(num,true,1000000*sizeof(int));
	for(int i=2;i*i<1000000;i++){
	    if(num[i]==true){
	        for(int j=i*i;j<1000000;j+=i){
	            num[j]=false;
	        }
	    }
	}
	for(int i=6;i<1000000;i++){
	    if(num[i]==true)
	        prime.push_back(i);
	}
	memset(num,true,1000000*sizeof(int));
	int len=prime.size();
	for(int i=0;i<len;i++){
	    for(int j=prime[i];j<1000000;j+=prime[i]){
	        num[i]=false;
	    }
	}
	for(int i=1;i<1000000;i++){
	    if(num[i]==true)
	        eagly.push_back(i);
	}
	int len1=eagly.size();
	for(int i=0;i<11;i++){
	    cout<<eagly[i]<<" ";
	}
	
	return 0;
}
