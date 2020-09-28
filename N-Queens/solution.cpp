#include "solution.h"
#include<iostream>
#include <cmath>


vector<vector<string>> Solution::solveNQueens(int n) {
	vector<vector<string>> res_str;
	vector<Coord> path;
	NQueensRecursion(n,0,path);
	//以皇后位置构建stirng数组
	for (auto coords : res) {
		//构建string数组，实际上是一个char矩阵
		vector<string> matrix;
		for (int i = 0; i < n; i++) {
			matrix.push_back(*(new string(n, '.')));
		}
		for (auto coord:coords) {
			matrix[coord.i][coord.j] = 'Q';
		}
		res_str.push_back(matrix);
	}
	return res_str;
}

//检查当前坐标是否合法
bool Solution::isIllegalCoord(vector<Coord>& queens,Coord& coord) {
	for (Coord queen : queens) {
		if (abs(queen.i - coord.i) == abs(queen.j - coord.j) || queen.i == coord.i || queen.j == coord.j) {
			return false;
		}
	}
	return true;
}

/// <summary>
/// 回溯主体
/// </summary>
/// <param name="n">最大递归层数</param>
/// <param name="level">当前层数</param>
/// <param name="path">皇后坐标列表</param>
void Solution::NQueensRecursion(int n, int level, vector<Coord>& path) {
	if (level == n) {
		res.push_back(path);
		return;
	}
	for (int j = 0; j < n; j++) {
		//在当前层从左到右生成坐标，并检查是否合法
		Coord* c = new Coord(level, j);
		if (isIllegalCoord(path, *c)) {
			path.push_back(*c);
			NQueensRecursion(n,level+1,path);
			path.pop_back();
		}
	}
}