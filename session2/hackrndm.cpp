#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k, pairs = 0, low, high, mid;
	cin>>n>>k;
	int* nums = new int[n];

	for(int i = 0; i < n; i++) {
		cin>>nums[i];
	}

	sort(nums, nums+n);

	for(int i = 0; i < n; i++) {
		low = i + 1;
		high = n-1;
		while(low<=high){
			mid = (low + high) / 2;
			if(nums[mid] == (nums[i] + k)) {
				pairs++;
				break;
			}
			else if(nums[mid]< (nums[i] + k)) {
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}
	}
	cout<<pairs<<endl;
	return 0;
}