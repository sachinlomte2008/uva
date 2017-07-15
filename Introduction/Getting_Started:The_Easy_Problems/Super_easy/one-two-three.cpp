//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=3710
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	char str[10];
	while(n--){
		scanf("%s",str);
		if(strlen(str)==5){
			cout<<"3"<<endl;
		}
		else{
			if((str[0]=='o'&&str[1]=='n')||(str[1]=='n'&&str[2]=='e')||(str[0]=='o'&&str[2]=='e')){
				cout<<"1"<<endl;
			}	
			else
				cout<<"2"<<endl;
		}
		
	}
	return 0;
}
