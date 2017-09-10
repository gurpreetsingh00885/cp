#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	cin.clear();
	int t, n, m, pairs, low, mid, high;
	int money[100000];
	cin>>t;
	while(t--) {
		pairs = 0;
		cin>>n>>m;
		for(int i = 0; i < n; i++) {
			cin>>money[i];
		}
		
		sort(money, money+n);

		for(int i = 0; i < n; i++) {
			low = i + 1;
			high = n-1;
			while(low<=high){
				//cout<<"high "<<high<<" low "<<low<<" for "<<(m - money[i])<<endl;			
				mid = (low + high) / 2;
				if(money[mid] == (m - money[i])) {
					pairs++;
					//cout<<"money "<<money[i]<<m-money[i]<<endl;
					break;
				}
				else if(money[mid]< (m - money[i])) {
					low = mid + 1;
				}
				else{
					high = mid - 1;
				}
			}

		}
		cout<<pairs<<endl;
	}
	return 0;

}
