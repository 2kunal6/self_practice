#include <string>
#include <iostream>

using namespace std;

int main() {
	int t,ct=1,b;
	cin>>t>>b;
	while(ct<=t) {
		string s,ch;
		for(int i=0;i<b;i++)s+='0';
		int curb=1;
		for(int i=1;i<=10;i++) {
			cout<<curb<<endl;
			cout<<flush;
			cin>>ch;
			if(ch=="N")return 0;
			if(i%10==1)continue;
			s[curb-1]=ch[0];
			curb++;
			if(curb==b+1)curb=1;
		}
		cout<<s<<endl;
		cout<<flush;
		ct++;
		cin>>ch;
		if(ch=="N")return 0;
	}
	return 0;
}

