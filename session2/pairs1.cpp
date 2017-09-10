// http://www.spoj.com/problems/PAIRS1/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, elem, count = 0;
	cin>>n>>k;
	int* nums = new int[n];
	for(int i = 0; i < n; i++)
		cin>>nums[i];
	
	sort(nums, nums+n);

	for(int i = 0; i < n-1; i++) {
		elem = nums[i] + k;
		count += -1* (nums - upper_bound(nums, nums+n, elem)) + (nums - lower_bound(nums, nums+n, elem));
	}
	
	cout<<count<<endl;
	return 0;
}
