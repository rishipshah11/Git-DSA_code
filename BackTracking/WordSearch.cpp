#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

class Solution {
    
    bool solve(vector<vector<char>>& board, int i, int j, int k, string word)
    {
        // boundrary condition
        if(i<0 || i >= board.size())
            return false;
        
        if(j<0 || j >= board[0].size())
            return false;
        
        if(board[i][j] == '-')
            return false;
        
        if(board[i][j] != word[k])
            return false;
        
        // Base case
        if(k >= word.length()-1)
            return true;
        
        char ch = board[i][j];
        
        // mark visited
        board[i][j] = '-';
        
        // traverce kardo
        
        bool left = solve(board,i,j-1,k+1,word);
        
        bool right = solve(board,i,j+1,k+1,word);
        
        bool up = solve(board,i-1,j,k+1,word);
        
        bool down = solve(board,i+1,j,k+1,word);
        
        // backTrack
        board[i][j] = ch;
        
        return left || right || up || down;
    }
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int row = board.size();
        int col = board[0].size();
        
        for(int i = 0 ; i < row; i++)
        {
            for(int j = 0; j < col ; j++)
            {
                if(solve(board,i,j,0,word))
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};