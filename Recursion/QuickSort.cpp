#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int partision(int arr[],int s,int e)
{
    int pivot = arr[s];

    // count the less numbers than pivot for right and left part purpose in array

    int cnt = 0;

    // we store first index in pivot so run for loop for s+1
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right positiob
    int pivotIndex = s + cnt;

    // swap it with first  so we can place right and left part
    swap(arr[pivotIndex],arr[s]);

    // abb left and right part sambhal lete h

    int i = s , j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        
        while (arr[j] > pivot)
        {
            j--;
        }

        // now swap
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    
    return pivotIndex;
}

void quickSort(int arr[],int s,int e)
{
    // base case
    if(s >= e)
    {
        return;
    }

    int p = partision(arr,s,e);

    // call for algorithm for left side
    quickSort(arr,s,p-1);

    // call for algorithm for right side
    quickSort(arr,p+1,e);
}

int main()
{
    int arr[] = {2,4,1,6,9};
    int n = 5;

    quickSort(arr,0,n-1);

    // print the refrence array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}