#include"solution.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//N »Êºó
int main() {
	Solution solution;
	vector<vector<string>> s=solution.solveNQueens(6);
	for (auto v : s) {
		for (auto i:v){
			cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}