#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[13];
	while(scanf(" %s",str)==1){
		char str1[6],str2[6];
		for(int i=0;i<12;i++){
			if(i<6){
				str1[i]=str[i];
			}
			else{
				str2[i-6]=str[i];
			}
		}
		//printf("str1: %s\n",str1);
		//printf("str2: %s\n",str2);
		vector<string>vs;
		for(int i=1;i<4;i++){
			string s;
			s.push_back(str1[i-1]);
			s.push_back(str1[6-i]);
			//cout<<s<<endl;
			vs.push_back(s);
			string si;			
			si.push_back(str1[6-i]);
			si.push_back(str1[i-1]);
			//cout<<si<<endl;
			vs.push_back(si);
		}
		
		int flag=0;
		for(int i=1;i<4;i++){
			flag=0;
			string s;	
			s.push_back(str2[i-1]);
			s.push_back(str2[6-i]);
			//cout<<"check "<<s<<endl;
			for(int j=0;j<6;j++){
				//cout<<"coms "<<vs[j]<<endl;	
				if(s.compare(vs[j])==0)
					flag=1;
			}
			if(flag==0)break;
		}

		if(flag)cout<<"TRUE"<<endl;
		else cout<<"FALSE"<<endl;
		//cout<<endl<<endl<<endl;
	}
	return 0;
}
