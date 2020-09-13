#include "solution.h"
#include<iostream>

vector<vector<int>> Solution::subsets(vector<int>& nums) {
    //路径数组
    //记录走过的路径，相当于实际上遍历解空间树的路径
    //因为从根节点出发最后需要回到根节点，因此执行完毕后，该数组将为空
    vector<int> track;
    backtrack(0,nums,track);
    return res;
}
void Solution::backtrack(int start,vector<int>& nums,vector<int>& track) {
    res.push_back(track);
    for (unsigned int i = start; i<nums.size(); i++) {
        //修改变量
        track.push_back(nums[i]);
        //传递至下一层
        backtrack(i + 1, nums, track);
        //还原变量
        track.pop_back();
        //cout << endl;
    }
}
