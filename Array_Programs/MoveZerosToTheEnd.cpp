#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void moveZeors(int arr[],int n)
{
    int noOfZeros = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j],arr[noOfZeros]);
            noOfZeros++;
        }
    }
}

void print(int arr[], int n) 
{
    for(int i=0; i<n; i++) 
    {
        cout<< arr[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {0,0,3,0,4,7,0,8};
    int n = 8;

    moveZeors(arr,n);
    print(arr,n);
    return 0;
}