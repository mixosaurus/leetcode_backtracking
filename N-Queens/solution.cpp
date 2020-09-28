#include "solution.h"
#include<iostream>
#include <cmath>


vector<vector<string>> Solution::solveNQueens(int n) {
	vector<vector<string>> res_str;
	vector<Coord> path;
	NQueensRecursion(n,0,path);
	//�Իʺ�λ�ù���stirng����
	for (auto coords : res) {
		//����string���飬ʵ������һ��char����
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

//��鵱ǰ�����Ƿ�Ϸ�
bool Solution::isIllegalCoord(vector<Coord>& queens,Coord& coord) {
	for (Coord queen : queens) {
		if (abs(queen.i - coord.i) == abs(queen.j - coord.j) || queen.i == coord.i || queen.j == coord.j) {
			return false;
		}
	}
	return true;
}

/// <summary>
/// ��������
/// </summary>
/// <param name="n">���ݹ����</param>
/// <param name="level">��ǰ����</param>
/// <param name="path">�ʺ������б�</param>
void Solution::NQueensRecursion(int n, int level, vector<Coord>& path) {
	if (level == n) {
		res.push_back(path);
		return;
	}
	for (int j = 0; j < n; j++) {
		//�ڵ�ǰ��������������꣬������Ƿ�Ϸ�
		Coord* c = new Coord(level, j);
		if (isIllegalCoord(path, *c)) {
			path.push_back(*c);
			NQueensRecursion(n,level+1,path);
			path.pop_back();
		}
	}
}