#pragma once
#include<string>
#include<vector>
#include<map>

using namespace std;

struct Coord{
    Coord(int i, int j) :i(i), j(j) {};
    int i = -1;
    int j = -1;;
};

class Solution {
private:
    vector<vector<Coord>> res;
public:
    vector<vector<string>> solveNQueens(int n);
    bool isIllegalCoord(vector<Coord>& queens, Coord& coord);
    void NQueensRecursion(int n, int level, vector<Coord>& path);
};

