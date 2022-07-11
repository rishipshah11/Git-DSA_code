#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

bool isPossible(int arr[],int n,int m,int mid)
{

    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum = pageSum + arr[i];
        }

        else
        {
            studentCount++;

            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[],int n,int m) // m = required student
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int e = sum;

    int mid = (s + e) / 2;
    int ans = 0;

    while(s < e)
    {
        int mid = (s + e) / 2;
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
    
}

int main()
{
    int arr[] = {10,20,30,40};
    int n = 4;

    int m = 2;

    cout << allocateBook(arr,n,m);
    return 0;
}