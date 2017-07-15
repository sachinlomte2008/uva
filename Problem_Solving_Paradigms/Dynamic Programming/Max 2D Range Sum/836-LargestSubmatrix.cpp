#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
using namespace std;
int a[10000][10000];
int n;


int main(){
	int t,index;
	cin>>t;
	char in[28][28];
	fgets ( in[0],28,stdin );
	int casew=1;
	while(t--){
		cout<<"CASE "<<casew<<endl;
		index=0;
		while( /*fgets(in[index],28,stdin)*/ scanf("%s",in[index])==1 && strcmp(in[index],"\n")  )index++;

		for(int i=0;i<index;i++){
			printf("%s\n",in[i]);
		}

		casew++;
	}
	return 0;	
}
