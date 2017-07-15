#include <bits/stdc++.h>
using namespace std;

int a[9],sol[100][9];

void write_sol(){
	static int index;
	for(int i=1;i<=8;i++){
		sol[index][i-1]=a[i]-1;
	}
	index++;
}

int place(int pos){
	for(int i=1;i<pos;i++){
		if(a[i]==a[pos] || abs(a[i]-a[pos])==abs(i-pos))
			return 0;
	}
	return 1;
}

void make_all_sol(int n){
	int k=1;
	a[k]=0;
	
	while(k!=0){
		
		do{
			a[k]++;
		}while(a[k]<=n && !place(k));
	
		if(a[k]<=n){
			if(k==n){
				write_sol();
			}
			else{
				k++;
				a[k]=0;
			}
		}
		else{
			k--;
		}
	}
}

int main(){
	make_all_sol(8);
	int j;
	cin>>j;
	
	while(j--){
		int max1=-1;
		int input[8][8];
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				int x;
				scanf(" %d",&x);
				input[i][j]=x;
			}
		}

		for(int i=0;i<92;i++){
			int sum=0;
			for(int j=0;j<8;j++){
 				sum+=input[j][sol[i][j]];
 			}
			max1=max(max1,sum);
		}

		printf("%5d\n",max1);
	}

	return 0;
}
