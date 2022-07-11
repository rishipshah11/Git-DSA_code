#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

// find the sum and substract in array element then missing number is find

int missingNumber(int arr[],int n)
{
    int total = (n + 1) * (n + 2) / 2;

    for (int i = 0; i < n; i++)
    {
        total = total - arr[i];
    }

    return total;
    
}

int main()
{
    int arr[] = {1,2,4,5};
    int n = 4;

   cout << missingNumber(arr,n);
    return 0;
}