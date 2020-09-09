#include "solution.h"
#include<iostream>

vector<string> Solution::generateParenthesis(int n) {
    generate(n, n,"");
    return res;
}
/// <summary>
/// 生成括号递归函数
/// </summary>
/// <param name="left_unused">未使用的左括号个数</param>
/// <param name="right_unused">未使用的右括号个数</param>
/// <param name="cur_str">存储括号序列的字符串</param>
void Solution::generate(int left_unused,int right_unused,string cur_str) {
    if (left_unused==0&&right_unused==0) {
        res.push_back(cur_str);
        return;
    }
    //还有未使用的左括号
    if (left_unused > 0) {
        generate(left_unused - 1, right_unused, cur_str + "(");
    }
    //未使用的右括号多于未使用的左括号
    if (left_unused<right_unused) {
        generate(left_unused, right_unused - 1, cur_str + ")");
    }
}
