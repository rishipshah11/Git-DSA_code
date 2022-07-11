#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

// kadans algoritham  = Largets sum in array

int kadenAlgoritham(int arr[],int n)
{
    int sum = 0 , ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        // naya element aya kya ?
        
        ans = max(ans , sum); // finding the maximum element

        // most imp part

        if (sum < 0)
        {
            sum = 0;
        }
    }

    return ans;
    
}

int main()
{
    int arr[] = {2,-3,4,-1,-2,1,5,-3};

    int n = 8;

    cout << kadenAlgoritham(arr,n);

    
    return 0;
}