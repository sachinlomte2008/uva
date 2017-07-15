//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=1491

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;
int modi(int x, int y){
	return (x%y+y)%y;
}

int main(){
	int degree=0;
	int a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)){
		if(a==0&&b==0&&c==0&&d==0)break;
		
		int deg1 =(modi(a-b,40)*9);
		int deg2,deg3;

		if(c>=b)
			deg2 =(modi(c-b,40))*9;
		else
			deg2 =(c+40-b)*9;
	
		deg3 =(modi(c-d,40))*9; 

		degree=720+deg1+360+deg2+deg3;
		cout<<degree<<endl;
	}	
	return 0;
}
