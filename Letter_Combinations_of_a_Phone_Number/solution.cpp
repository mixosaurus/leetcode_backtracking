#include "solution.h"
#include<iostream>

vector<string> Solution::letterCombinations(string digits) {
    if (digits.empty()) {
        return vector<string>();
    }
    map<char, string> map = {
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    combinations_backtrack("",digits,0,map);
    return res;
}

void Solution::combinations(string path, string digits, int level, map<char,string> map) {
    if (level == digits.size()) {
        res.push_back(path);
        return;
    }
    string letters = map[digits[level]];
    for (int j = 0; j < letters.size(); j++) {
        combinations(path+ string(1, letters[j]), digits, level + 1,map);
    }
}
