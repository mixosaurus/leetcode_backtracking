#pragma once
#include<string>
#include<vector>
using namespace std;

class Solution {
private:
	vector<string> res;
public:
	vector<string> generateParenthesis(int n);
	void generate(int left_unused, int right_unused, string cur_str);
};
