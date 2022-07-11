#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

  
int peakIndexInMountainArray(int arr[],int n) 
{
    int s = 0, e = n - 1;

	int mid=(s + e) / 2;

	while (s < e)
	{
		if(arr[mid] < arr[mid+1])
     			s=mid+1;
    		else
      			e = mid;
    
		mid = (s + e) / 2;
	}
	return s;
}

int main()
{
    int arr[] = {3,4,5,1};

    int n = 4;

    cout << peakIndexInMountainArray(arr,n); 
}
