#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

vector<int> findDuplicate(vector<int> &nums)
{
    int n = nums.size();

    sort(nums.begin(),nums.end());

    vector<int> ans;

    for (int i = 0; i < n-1; i++)
    {
        if (nums[i] == nums[i+1])
        {
            ans.push_back(nums[i]);
        }
    }

    return ans;
    
}

int main()
{
    vector<int> arr;

    int input;

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter your input : ";
        cin>>input;
        arr.push_back(input);
    }

    vector<int> result = findDuplicate(arr);
    return 0;
}