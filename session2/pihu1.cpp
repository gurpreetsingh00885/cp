// http://www.spoj.com/problems/PIHU1/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int T, N, low, mid, high, found = 0;
	long long nums[1000], A1, A2, A3, P, elem;
	cin>>T;
	while(T--) {
		cin>>N;
		for(int i = 0; i < N; i++) {
			cin>>nums[i];
		}
		cin>>P;
		sort(nums, nums+N);
		found = 0;
		for(int i = 0; i < N - 2; i++) {
			A1 = nums[i];
			if(A1 > P) {
				continue;
			}
			for(int j=i+1; j < N - 1; j++) {
				A2 = nums[j];
				if(A1 + A2 > P) {
					continue;
				}
				elem = P - (A1 + A2);

				low = j+1;
				high = N;

				while(low<=high){
					mid = (low + high) / 2;
					if(nums[mid] == elem) {
						found = 1;
						break;
					}
					else if(nums[mid] < elem) {
						low = mid + 1;
					}
					else {
						high = mid - 1;
					}
				}
				if(found){
					break;
				}
			}
			if(found){
				break;
			}
		}
		if(found){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}