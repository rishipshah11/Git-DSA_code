#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int firstOccurance(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;

    int ans = -1;

    int mid = ((start + end)/2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;  // for left occurance --> left me jao
        }

        else if (arr[mid] > key) // Right me jao
        {
            start = mid + 1;
        }

        else if (arr[mid] < key) // Left me jao
        {
            end = mid - 1;
        }
        
        mid = ((start + end)/2);
        
    }

    return ans;
    
}

int LastOccurance(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;

    int ans = -1;

    int mid = ((start + end)/2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // for Right occurance --> Right me jao  
        }

        else if (arr[mid] > key) // Right me jao
        {
            start = mid + 1;
        }

        else if (arr[mid] < key) // Left me jao
        {
            end = mid - 1;
        }
        
        mid = ((start + end)/2);
        
    }

    return ans;
    
}


int main()
{
    int even[5] = {1,2,3,3,5};

    int n = 5;

    cout << "First occurance of 3 index : " << firstOccurance(even,5,3);

    cout << endl;

    cout << "Last occurance of 3 index : " << LastOccurance(even,5,3);
    
    return 0;
}