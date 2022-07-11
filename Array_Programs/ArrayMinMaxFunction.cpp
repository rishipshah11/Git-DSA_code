#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int getMax(int arr[],int n)
{
    int max = INT_MIN;

     for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
    
}

int getMin(int arr[],int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    
    return min;
}

int main()
{
    int n;
    cout<<"Enter n = ";
    cin>>n;

    int arr[10];

    cout<<"Enter array element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans1 = getMax(arr, n);
    cout<<"Maximum value is :"<< ans1 <<endl;

    // int result = getMin(arr,n);
    // cout<<result;
    
}