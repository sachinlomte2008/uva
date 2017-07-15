#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int T,R,H;
	while(scanf("%d%d%d",&T,&R,&H)==3){
		int t[T][R+1],r[R][H+1],h[H][T+1];
		int min1=INT_MAX,t1=-1,r1=-1,h1=-1;

		for(int i=0;i<T;i++)
			for(int j=0;j<R+1;j++)
				scanf("%d",&t[i][j]);

		for(int i=0;i<R;i++)
			for(int j=0;j<H+1;j++)
				scanf("%d",&r[i][j]);

		for(int i=0;i<H;i++)
			for(int j=0;j<T+1;j++)
				scanf("%d",&h[i][j]);

	
		for(int i=0;i<T;i++){
			for(int j=0;j<R;j++){
				
				if(t[i][j+1]==1)continue;
				for(int k=0;k<H;k++){
					
					if(r[j][k+1])continue;
					if(h[k][i+1])continue;

					int temp = t[i][0]+r[j][0]+h[k][0];
					if(temp<min1){
						t1=i;r1=j;h1=k;
						min1=temp;
					}
				}
			}
		}

		if(min1==INT_MAX)
			printf("Don't get married!\n");
		else
			printf("%d %d %d:%d\n",t1,r1,h1,min1);
	}

	return 0;
}
