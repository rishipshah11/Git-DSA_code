#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part

        if(key > arr[mid]) 
        {
            start = mid + 1;
        }

        else
        { 
            //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int searchInrotatedArray(int arr[],int n,int key)
{
    int pivot = getPivot(arr,n);

    if(key >= arr[pivot] && key <= arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,key);
    }

    else
    {
        return binarySearch(arr,0,pivot - 1,key);
    }
    
}

int main()
{
    int arr[] = {7,9,1,2,3};

    int n = 5;

    cout << searchInrotatedArray(arr,n,2);
}