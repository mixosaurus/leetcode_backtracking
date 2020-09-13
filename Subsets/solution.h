#pragma once
#include<string>
#include<vector>
using namespace std;

class Solution {
private:
	vector<vector<int>> res;
public:
	vector<vector<int>> subsets(vector<int>& nums);
	void backtrack(int start, vector<int>& nums, vector<int>& track);
};

