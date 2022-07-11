#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void kthLargest(int arr[],int n,int k)
{
    // Sort the array in reverce order

    sort(arr,arr + n,greater<int>());

    // print the first k'th largest elements
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

int kthSmallest(int arr[],int n,int k)
{
    // Sort the given array

    sort(arr,arr + n);

    // return the k th element in the sorted array

    return arr[k - 1]; 
}

int main()
{
    int arr[] = {12,3,5,7,19};

    int n = 5;

    int k = 3;

    int arr1[] = {1,23,12,9,30,2,50};

    int n1 = 7;

    int k1 = 3;

    // cout << "K' th smallest element is : " << kthSmallest(arr,n,k);

    kthLargest(arr1 , n1 , k1);
    return 0;
}