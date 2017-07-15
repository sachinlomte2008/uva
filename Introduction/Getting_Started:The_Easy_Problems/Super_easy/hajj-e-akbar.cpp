//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=4022
#include <bits/stdc++.h>
using namespace std;


int main(){
	int count=1;	
	while(1){
		char str[50];
		scanf("%s",str);
		if(strcmp(str,"*")==0)
			break;
		else if(strcmp(str,"Hajj")==0)
			cout<<"Case "<<count<<": "<<"Hajj-e-Akbar"<<endl;
		else
			cout<<"Case "<<count<<": "<<"Hajj-e-Asghar"<<endl;
		count++;
	}
	return 0;
}
