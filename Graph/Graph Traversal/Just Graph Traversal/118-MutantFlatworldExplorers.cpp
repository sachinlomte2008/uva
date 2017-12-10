#include <bits/stdc++.h>
using namespace std;
int his[51][51];
int X,Y;
int main() {
	
	for(int i=0;i<51;i++)
		for(int j=0;j<51;j++)
			his[i][j]=0;

	cin>>X>>Y;
	char dir;
	int ix,iy;

	while(scanf("%d %d %c",&ix,&iy,&dir)==3){
		string s;cin>>s;int len=s.length();
		int flag=1;

		for(int i=0;i<len;i++){
			
			if(dir=='N'){
				if(s[i]=='F'){
					iy+=1;
					if(iy>Y){
						iy-=1;
						if(his[ix][iy]!=1){
							his[ix][iy]=1;
							flag=0;
							break;
						}
					}
				}
				else if(s[i]=='R')dir='E';
				else dir='W';
			}


			else if(dir=='E'){
				if(s[i]=='F'){
					ix+=1;
					if(ix>X){
						ix-=1;
						if(his[ix][iy]!=1){
							his[ix][iy]=1;
							flag=0;
							break;
						}
					}
				}
				else if(s[i]=='R')dir='S';
				else dir='N';
			}
		
			else if(dir=='S'){
				if(s[i]=='F'){
					iy-=1;
					if(iy<0){
						iy+=1;
						if(his[ix][iy]!=1){
							his[ix][iy]=1;
							flag=0;
							break;
						}
					}
				}
				else if(s[i]=='R')dir='W';
				else dir='E';
			}
			else{
				if(s[i]=='F'){
					ix-=1;
					if(ix<0){
						ix+=1;
						if(his[ix][iy]!=1){
							his[ix][iy]=1;
							flag=0;
							break;
						}
					}
				}
				else if(s[i]=='R')dir='N';
				else dir='S';
			}
		}	
		if(flag==0)
			cout<<ix<<" "<<iy<<" "<<dir<<" LOST"<<endl;
		else
			cout<<ix<<" "<<iy<<" "<<dir<<endl;
	}
	return 0;
}
