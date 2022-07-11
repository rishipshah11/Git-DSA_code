#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void subArrayWithKSlidingWindow(int arr[],int n,int k) // o(N) --> time complexity
{
    int i = 0;
    int j = 0;

    int sum = 0;

    while(j < n)
    {
        sum = sum + arr[j];
        j++;

        while (sum > k && i < j)
        {
            sum = sum - arr[i];
            i++;
        }
        
        if (sum == k)
        {
            cout << i << " " << " to " << j - 1 << " "; // between this range 
        }
        
    }
}

int main()
{
    int arr[] = {2,1,3,5,0,5,2,4};

    int n = 8;

    int k = 6;

    subArrayWithKSlidingWindow(arr,n,k);

    return 0;
}