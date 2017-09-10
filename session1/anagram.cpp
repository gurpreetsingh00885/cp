#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1, s2;
	while(n--){
	getline(cin, s1, '\n');
	int changes=0, len = s1.size();
	if(!(len % 2)){

		s2 = s1.substr(len/2, len/2);
		s1 = s1.substr(0, len/2);

		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
	
		for(int i = 0; i<s1.size(); i++) { 
			if(s1[i]!=s2[i])
				changes+=1;
		}
	
		cout<<changes<<"\n";
	}
	else {
		cout<<-1<<"\n";
	}
	}
	return 0;
	

}
