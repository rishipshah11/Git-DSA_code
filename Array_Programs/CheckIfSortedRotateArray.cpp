#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

bool checkIfSortedRotate(vector<int>& arr,int n)
{
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        // check for sorted rotated  here 5 > 1 --> count become : 1
        if (arr[i-1] > arr[i])
        {
            count++;
        }
    }

    // check for the last element if it greate than the first element then it is not sorted rotated

    if (arr[n-1] > arr[0])
    {
        count++;
    }

    if( count <= 1 )
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    vector<int> v;
    
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);

    int n = 5;

    cout << checkIfSortedRotate(v,n);
    return 0;
}