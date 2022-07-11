#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

// Time Complexity - O(n)

int firstRepeated(int *arr, int n) {
    // code here
    
    //stores the count of numbers
    
    unordered_map<int,int> count;
    for(int i = 0; i < n ; i++)
    {
        int currElement = arr[i];
        count[currElement]++;
    }
    
    // traverce the array

    for(int i =0;i < n;i++)
    {
        int currElement = arr[i];
        if(count[currElement] > 1)
        {
            return currElement;
        }
    }
    return -1;
    
}
int main()
{
    int n = 7;
    int arr[] = {1, 5, 3, 4, 3, 5, 6};

    cout << firstRepeated(arr,n);
    return 0;
}