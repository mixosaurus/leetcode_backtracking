#include "solution.h"
#include<iostream>

vector<vector<int>> Solution::subsets(vector<int>& nums) {
    //·������
    //��¼�߹���·�����൱��ʵ���ϱ�����ռ�����·��
    //��Ϊ�Ӹ��ڵ���������Ҫ�ص����ڵ㣬���ִ����Ϻ󣬸����齫Ϊ��
    vector<int> track;
    backtrack(0,nums,track);
    return res;
}
void Solution::backtrack(int start,vector<int>& nums,vector<int> track) {
    res.push_back(track);
    for (unsigned int i = start; i<nums.size(); i++) {
        //�޸ı���
        track.push_back(nums[i]);
        //��������һ��
        backtrack(i + 1, nums, track);
        //��ԭ����
        track.pop_back();
        //cout << endl;
    }
}
