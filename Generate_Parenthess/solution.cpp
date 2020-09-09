#include "solution.h"
#include<iostream>

vector<string> Solution::generateParenthesis(int n) {
    generate(n, n,"");
    return res;
}
/// <summary>
/// �������ŵݹ麯��
/// </summary>
/// <param name="left_unused">δʹ�õ������Ÿ���</param>
/// <param name="right_unused">δʹ�õ������Ÿ���</param>
/// <param name="cur_str">�洢�������е��ַ���</param>
void Solution::generate(int left_unused,int right_unused,string cur_str) {
    if (left_unused==0&&right_unused==0) {
        res.push_back(cur_str);
        return;
    }
    //����δʹ�õ�������
    if (left_unused > 0) {
        generate(left_unused - 1, right_unused, cur_str + "(");
    }
    //δʹ�õ������Ŷ���δʹ�õ�������
    if (left_unused<right_unused) {
        generate(left_unused, right_unused - 1, cur_str + ")");
    }
}
