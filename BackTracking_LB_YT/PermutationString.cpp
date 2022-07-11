#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

class Solution {
    
    void solve(vector<int>& nums, vector<vector<int>> &ans, int index)
    {
        // base case
        if(index >= nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        
        for(int j = index ; j < nums.size() ; j++)
        {
            swap(nums[index],nums[j]);
            
            solve(nums, ans, index+1);
            
            //backtrack
            swap(nums[index],nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        int index = 0;
        vector<vector<int>> ans;
        
        solve(nums, ans, index);
        
        return ans;
    }
};