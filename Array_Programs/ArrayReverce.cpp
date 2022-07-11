#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void reverce(int arr[],int n)
{
    int start = 0;
    int end = n-1;

    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
 
}

void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int n = 3;

    int arr[3] = {5,3,1};

    reverce(arr,n);

    printArray(arr,n);


    return 0;
}