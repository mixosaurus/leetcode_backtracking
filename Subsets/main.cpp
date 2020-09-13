#include"solution.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//78. ×Ó¼¯
int main() {
	Solution solution;
	vector<int>nums = { 1,2,3 };
	vector<vector<int>> sets = solution.subsets(nums);
    for (auto set: sets) {
		for (int i : set) {
			cout << i << " ";
		}
	    cout << endl;
    }
	return 0;
}