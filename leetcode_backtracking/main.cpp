#include<iostream>
#include<vector>
#include<string>
#include"solution.h"
using namespace std;

//22. À¨ºÅÉú³É
int main() {
	Solution solution;
	vector<string> strs=solution.generateParenthesis(3);
	for (string s : strs) {
		cout << s<< endl;
	}
	return 0;
}