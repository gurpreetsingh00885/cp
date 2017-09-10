#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	
	getline(cin, s);
	reverse(s.begin(), s.end());
	s = " " + s;
	while(s.find(' ') != string::npos) {
		cout << s.substr(s.find_last_of(' ')+1);
		s.erase(s.find_last_of(' '));
		if(s.find(' ') != string::npos){
			cout << " ";
		}
	}
	cout<<endl;	
	return 0;
}
