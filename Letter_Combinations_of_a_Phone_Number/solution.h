#pragma once
#include<string>
#include<vector>
#include<map>

using namespace std;

class Solution {
private:
    vector<string> res;
public:
    vector<string> letterCombinations(string digits);
    void combinations(string s, string digits, int i, map<char,string> map);
    void combinations_backtrack(vector<string> path, string digits, int level, map<char, string> map);
    //void combinations(vector<string>& first, int start_f, vector<string>& second, string path);
};

