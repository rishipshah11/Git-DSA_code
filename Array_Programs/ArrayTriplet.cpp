#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;


// arr[] = {1,2,3,4,5};
// using 2 poitner approch
vector<vector<int>> pairSum(vector<int> &arr,int k,int n)
{
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        int left = i + 1;
        int right = n - 1;

        if (arr[i] + arr[left] + arr[right] == k)
        {
            ans.push_back({arr[i],arr[left],arr[right]});
        }
        
        else if(arr[i] + arr[left] + arr[right] < k)
        {
            left ++;
        }
        
        else
        {
            right--;
        }

    }

    return ans;
    
}
int main()
{
    
    return 0;
}