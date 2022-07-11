#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int binarySearch(int arr[],int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s)/2;

        if (arr[mid] == mid)
        {
            return mid;
        }

        else if (arr[mid] > mid)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
        
    }

    return -1;
}

int main()
{
    int arr[] = {0,1,2,4,7,8};

    int n = 6;
    cout << binarySearch(arr,n);
    return 0;
}