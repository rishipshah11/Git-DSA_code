#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;


bool binarySearch(vector<int>& arr,int s,int e,int target)
{
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(target == arr[mid])
        {
            return true;
        }
        if(arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e-s)/2;
    }
    return false;
}
    
bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++)
        {
            //check for +ve number
            if(arr[i]>=0 && binarySearch(arr,i+1,arr.size()-1,2*arr[i]))
                return true;
            // check for -ve number
             if(arr[i] < 0 && arr[i] % 2 == 0 && binarySearch(arr,i+1,arr.size()-1,arr[i]/2))
                return true;
        }
        return false;
    }
int main()
{
    vector<int> arr;

    arr.push_back(11);
    arr.push_back(10);
    arr.push_back(9);
    arr.push_back(8);
    arr.push_back(7);

    // int arr[] = {-4,-3,-2,2,5,7};
    int n = 5;

    // After sort --> int arr[] = {3,4,7,9,10,11};

   cout << checkIfExist(arr);
    
    return 0;
}