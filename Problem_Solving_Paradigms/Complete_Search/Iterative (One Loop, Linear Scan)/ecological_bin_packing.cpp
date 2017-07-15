//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=640&page=show_problem&problem=38
#include <bits/stdc++.h>
using namespace std;

int main(){
	int b1,g1,c1,b2,g2,c2,b3,g3,c3,a[6],min;
//	while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)){
	while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){	
		a[0]=b2+b3+g1+g2+c1+c3;
		a[1]=b2+b3+g1+g3+c1+c2;
		a[2]=b1+b3+g2+g3+c1+c2;
		a[3]=b2+b1+g2+g3+c1+c3;
		a[4]=b3+b1+g1+g2+c3+c2;
		a[5]=b1+b2+g1+g3+c3+c2;
		for(int i=0;i<6;i++){
			if(i==0)min=a[0];

			if(min>a[i])min=a[i];
		}

		if(min==a[0])cout<<"BCG ";
		else if(min==a[1])cout<<"BGC ";
		else if(min==a[2])cout<<"GBC ";
		else if(min==a[3])cout<<"GCB ";
		else if(min==a[4])cout<<"CBG ";
		else if(min==a[5])cout<<"CGB ";

		cout<<min<<endl;
		
	}
	return 0;
}
