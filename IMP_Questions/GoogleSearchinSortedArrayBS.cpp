#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

bool binarySearch(int arr[],int s,int e,int target)
{
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(target == arr[mid])
        {
            return true;
        }
        if(arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e-s)/2;
    }
    return false;
}

int searchInSortedArray(int arr[],int n,int target)
{
    int s = 0;
    int e = 1;

    int value = arr[0];

    while (value < target)
    {
        s = e;
        e = 2 * e;
        value = arr[e];
    }

    if(value >= target)
        return binarySearch(arr,s,e,target);
    
}

int main()
{
    int arr[] = {3,5,7,10,15,17,21,30,34,37,40};
    int n = 11;

    cout << searchInSortedArray(arr,n,6);
    return 0;
}