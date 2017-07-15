//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=608&page=show_problem&problem=562
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		char str[1000];
		scanf("%s",str);
		if(strcmp(str,"1")==0||strcmp(str,"4")==0||strcmp(str,"78")==0){
			cout<<"+"<<endl;
		}
		else if(strlen(str)>1){
			if(str[strlen(str)-2]=='3'&&str[strlen(str)-1]=='5'){
				cout<<"-"<<endl;		
			}
			else if(str[0]=='9'&&str[strlen(str)-1]=='4'){
				cout<<"*"<<endl;
			}
			else
			cout<<"?"<<endl;
		}
	
			
	}
	return 0;
}
