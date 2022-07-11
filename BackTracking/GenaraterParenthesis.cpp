#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

class Solution {
private:
    void solve(int currOpen,int currClose,int remOpen,int remClose,vector<string>&ans,string &output)
    {
        // base case
        if(remOpen == 0 && remClose == 0)
        {
            ans.push_back(output);
            return;
        }
        
        // "(" ke liye call karo
        if(remOpen > 0)
        {
            output.push_back('(');
            solve(currOpen+1,currClose,remOpen-1,remClose,ans,output);
            
            // backtrack
            output.pop_back();
        }
        
        // ")" ke liye call karo
        if(remClose > 0 && currOpen > currClose)
        {
            output.push_back(')');
            solve(currOpen,currClose+1,remOpen,remClose-1,ans,output);
            
            // backtrack
            output.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output = "(";
        
        int currOpen = 1;
        int currClose = 0;
        int remOpen = n-1;
        int remClose = n;
        
        solve(currOpen,currClose,remOpen,remClose,ans,output);
        return ans;
    }
};