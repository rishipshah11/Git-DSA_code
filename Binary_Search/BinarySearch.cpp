#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int binarySearch(int arr[],int n,int k)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s)/2;

        if (arr[mid] == k)
        {
            return mid;
        }
        

        else if (arr[mid] > k)
        {
            s = mid + 1;
        }

        else if(arr[mid] < k)
        {
            e = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,7,8};

    int n = 5;
    cout << binarySearch(arr,n,3);
    return 0;
}