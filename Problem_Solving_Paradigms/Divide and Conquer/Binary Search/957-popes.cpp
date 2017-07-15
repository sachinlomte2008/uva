#include <bits/stdc++.h>
using namespace std;
#define max_p 1000009
int year[max_p];

int main(){
	int y,p;
	while(scanf(" %d%d",&y,&p)==2){
		
		for(int i=0;i<p;i++){
			scanf(" %d ",year+i);
		}

		int lo=0,hi=0,pope_lo=year[0],pope_hi=year[0];
		int max_pope=1;

		for( hi=1; hi<p ; hi++){
			
			while(year[hi]-year[lo] >= y){
				lo++;
			}
		
			int temp=hi-lo+1;
			if(temp>max_pope){
				max_pope=temp;
				pope_lo=year[lo];
				pope_hi=year[hi];
			}
		}

		printf("%d %d %d\n",max_pope,pope_lo,pope_hi);
			
	}
	return 0;
}
