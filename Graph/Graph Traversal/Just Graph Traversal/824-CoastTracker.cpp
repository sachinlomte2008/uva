#include <bits/stdc++.h>

using namespace std;

int dir;
int per[3][3];

int main(){
	int m,n;	
	while(scanf( "%d %d %d", &m , &n , &dir)==3){
		
		//cin>>x>>y>>per[0][1];
		//cin>>x>>y>>per[0][0];
		//cin>>x>>y>>per[1][0];
		//cin>>x>>y>>per[2][0];
		//cin>>x>>y>>per[2][1];
		//cin>>x>>y>>per[2][2];
		//cin>>x>>y>>per[1][2];
		//cin>>x>>y>>per[0][2];
		for(int i=0;i<8;i++){
			int nx,ny,val;
			cin>>nx>>ny>>val;
			per[1+n-ny][1+nx-m]=val;
		}

		int dd[8][2]={{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1}};

		int count=0;
		while(count<8){
			
			int index=(dir+7)%8;
			
			if(per[1+dd[index][0]][1+dd[index][1]]==1){
				cout<<(index+7)%8<<endl;
				break;
			}
			
			dir++;
			count++;
		}
	}
	return 0;
}
