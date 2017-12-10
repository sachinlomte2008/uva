#include <bits/stdc++.h>
using namespace std;

class treasure{
	int d,c;
	public:
	treasure(int d1,int c1){
		d=d1;c=c1;
	}
	int getdepth(){return d;}
	int getcoin(){return c;}
};

int main(){
	int T,w;cin>>T>>w;
	int n;cin>>n;
	bool *sieve= new bool[n];
	memset(sieve,false,n*sizeof(bool));
	vector<treasure> vi;
	for(int i=0;i<n;i++){
		int d,c;cin>>d>>c;
		treasure t1(d,c);
		vi.push_back(t1);
	}

	int k[n+1][T+1],ct=0;
	for(int i=0;i<=n;i++){
		for(int t=0;t<=T;t++){
			int t_tot;
			
			if(i>=1){
				t_tot = 3*w*vi[i-1].getdepth();
			}
			
			if( t==0 || i==0 )k[i][t]=0;
			
			else if(t_tot<=t){
				//k[i][t]=max(vi[i-1].getcoin()+k[i-1][t-t_tot] , k[i-1][t]);
				if(vi[i-1].getcoin()+k[i-1][t-t_tot] > k[i-1][t]){
					k[i][t]=vi[i-1].getcoin()+k[i-1][t-t_tot];
					if(t_tot==t){sieve[i-1]=true;ct++;}
				}
				else
					k[i][t]=k[i-1][t];
			}
			
			else{
				k[i][t]=k[i-1][t];
			}
		}
	}

	cout<<k[n][T]<<endl<<ct<<endl;
	for(int i=0;i<n;i++){
		if(sieve[i])
			cout<<vi[i].getdepth()<<" "<<vi[i].getcoin()<<endl;
	}
	return 0;	
}
