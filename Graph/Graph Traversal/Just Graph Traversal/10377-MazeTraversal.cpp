#include <bits/stdc++.h>
using namespace std;
char b[64][64];

int main(){
	
	int T,m,n,x,y;
	scanf("%d",&T);
	char ans_dir[]={'N','E','S','W'};
	
	while(T--){
		scanf("%d %d ",&m,&n);

		for(int i=1;i<=m;i++)
			fgets(b[i]+1,63,stdin);
			
		scanf("%d %d ",&x,&y);
		int ch,dir=0;
		
		while( (ch=getchar()) != 'Q'){
			if( ch == 'F' ){;			
				int c1=0,c2=0;
				switch(dir){
					case 0:c1=-1;break;
					case 1:c2=1 ;break;
					case 2:c1=1 ;break;
					case 3:c2=-1;break;
				}
				if(b[x+c1][y+c2]!='*'){
					x+=c1;
					y+=c2;
				}
			}
			
			else if( ch == 'R'){
				dir=(dir+1)%4;
			}
			
			else if(ch == 'L'){
				dir=(dir+3)%4;
			}
		}
	
		printf ("%d %d %c\n", x, y, ans_dir[dir]);
		if (T) putchar ('\n');

	}	
	return 0;	
}
