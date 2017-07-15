//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=607&page=show_problem&problem=3402
#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[20];
	int i=1;
	while(1){
		scanf("%s",str);
		if(strcmp(str,"#")==0)
				break;
		else if(strcmp(str,"HELLO")==0)
			cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
		else if(strcmp(str,"HOLA")==0)
			cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
		else if(strcmp(str,"HALLO")==0)
			cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
		else if(strcmp(str,"BONJOUR")==0)
			cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
		else if(strcmp(str,"CIAO")==0)
			cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
		else if(strcmp(str,"ZDRAVSTVUJTE")==0)
			cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
		else
			cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
	i++;		
	}
	return 0;
}
