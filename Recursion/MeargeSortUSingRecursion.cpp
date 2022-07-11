#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void mearge(int arr[],int s,int e)
{
    int mid = (s+e)/2;
    
    int leftLen = mid - s + 1;
    int rightLen = e - mid;

    // Ex : 1 2 4 6 8 9
    //      0 1 2 3 4 5   --> length = 6

    //        mid
    // 1 2 4   |   6 8 9
    // s               e

    // 1st half lenght = mid - s + 1 --> mid = (0 + 5)/2 = 2  --> leftLen = 2 - 0 + 1 = 3
    // 2nd half lenght = e - mid -->  rightLen = 5 - 2 = 3

    // now for copying value we create left and right array

    int * left = new int[leftLen];
    int * right = new int[rightLen];

    // copying value in left and right array
    int mainArrayIndex = s;

    for (int i = 0; i < leftLen; i++)
    {
        left[i] = arr[mainArrayIndex++];
    }

    // set mainArrayIndex index to mid + 1 for copying the right array
    mainArrayIndex = mid + 1;

    for (int i = 0; i < rightLen; i++)
    {
        right[i] = arr[mainArrayIndex++];
    }

    // now mearge this left and right array

    int index1 = 0;
    int index2 = 0;

    // set mainArrayIndex at s and mearge karo pela ni jem
    mainArrayIndex = s;

    while (index1 < leftLen && index2 < rightLen)
    {
        if (left[index1] < right[index2])
        {
            arr[mainArrayIndex++] = left[index1++];
        }

        else
        {
            arr[mainArrayIndex++] = right[index2++];
        }
    }

    // put the remaining element of left array in original array
    while (index1 < leftLen)
    {
        arr[mainArrayIndex++] = left[index1++];
    }

    while (index2 < rightLen)
    {
        arr[mainArrayIndex++] = right[index2++];
    }

    delete [] left;
    delete [] right;
}

void meargeSort(int arr[],int s,int e)
{
    // base case
    if(s >= e)
    {
        return;
    }

    int mid = s + (e-s)/2;

    // left part ma meargeSort karo
    meargeSort(arr,s,mid);

    // right part ma measrgfeSort karo
    meargeSort(arr,mid+1,e);

    // banne ne mearge karo
    mearge(arr,s,e);
}

int main()
{
    int arr[] = {2,5,1,6,9};
    int n = 5;

    meargeSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}