#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

// Optimaization 1
/*
vector<int> pairSum(vector<int> & arr1,int n,vector<int> & arr2,int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }   
        } 
    }
    
    return ans;
}
*/

vector<int> pairSum(vector<int> & arr1,int n,vector<int> & arr2,int m)
{
    int i = 0 , j = 0;

    vector<int> ans;


    while(i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if(arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
        }
        
    }

    return ans;
}


int main()
{

    return 0;
}