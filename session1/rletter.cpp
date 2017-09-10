#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	char x, y;
	getline(cin, s);
	cin>>x>>y;
	replace(s.begin(), s.end(), x, y);
	cout<<s;
	
	return 0;
}
