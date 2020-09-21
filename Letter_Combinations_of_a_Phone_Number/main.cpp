#include"solution.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//17. 电话号码的字母组合集
int main() {
	Solution solution;
	vector<string> com=solution.letterCombinations("23");
	for (string str : com) {
		cout << str << " ";
	}
	return 0;
}