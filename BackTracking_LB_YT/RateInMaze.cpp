#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
class Solution{
    
    public:
    
    bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> &m)
    {
        if( (x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>> &m, int n,vector<string> &ans,int x,int y,vector<vector<int>> visited,string path)
    {
        if(x == n-1 && y == n-1)
        {
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;

        // 4 choices - D , L , R , U
        
        // down
        int newx = x + 1;
        int newy = y;
        
        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        // left 
        newx = x;
        newy = y-1;
        
        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('L');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        //Right
        newx = x;
        newy = y+1;
        
        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('R');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        // UP
        newx = x-1;
        newy = y;
        
        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('U');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        int srcx = 0;
        int srcy = 0;
        
        if(m[0][0] == 0)
        return ans;
        
        vector<vector<int>> visited = m;
        
        //intialize with the 0's
        for(int i = 0; i < n ; i ++)
        {
            for(int j = 0 ;j < n ; j++)
            {
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
int main()
{
    // Solution *backtrack = new Solution;

    int n;
    cin >> n;

    vector<vector<int>> m (n,vector<int>(n,0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }

    Solution obj;

    vector<string> result = obj.findPath(m,n);
    sort(result.begin(),result.end());

    if(result.size() == 0)
    cout  << -1;

    else
    {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    

    // backtrack->findPath();
    return 0;
}