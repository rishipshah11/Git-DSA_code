#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr,int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
            
        }
        
    }

    sort(ans.begin(),ans.end());

    return ans;
    
}


int main()
{
    
    return 0;
}