#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(string tiles,string &output, set<string> &result,map<int,bool> &flag)
{
    // base case --> for loop
    //  to check for each character in string 
    for (int i = 0; i < tiles.length(); i++)
    {
        // to track indexes 
        if(flag[i] == 0)
        {
            // taking first cahracter
            char ch = tiles[i];

            output.push_back(ch);
            flag[i] = 1;
            
            // store output string into result set
            result.insert(output);
            
            // recursive call
            solve(tiles,output,result,flag);
            
            // backtrack --> when you return from recursive call
            output.pop_back();
            flag[i] = 0;
        }
    }
}

int numTilePossibilities(string tiles) {
        
    string output = " ";
        
    // to track which has been included in the output string 
    map<int,bool> flag;
        
    // to store all different output strings
    set<string> result;

    solve(tiles,output,result,flag);

    return result.size(); // because in the question ask for size 
        
    }

int main()
{
    string tiles = "AAB";

    cout << numTilePossibilities(tiles);
    return 0;
}