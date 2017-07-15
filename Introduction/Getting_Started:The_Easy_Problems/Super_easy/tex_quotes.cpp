//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=666&page=show_problem&problem=54

#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
#include <string>

using namespace std;

int main(){
	char ch[10];
	int open=1;
	while(fgets(ch,10,stdin)!=NULL){
		int len = strlen(ch);
		for (int i = 0; i < len; ++i)
		{
			if (ch[i]=='"')
			{
				if (open)
					cout<<"``";
				else
					cout<<"''";
				open=!open;
			}
			else{
				cout<<ch[i];
			}
		}
	}	
	return 0;
}
