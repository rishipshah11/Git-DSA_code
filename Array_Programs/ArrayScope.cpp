#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int update(int arr[],int n)
{
    arr[0] = 120;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int arr[3] = {1,2,3};

    update(arr,3);
    return 0;
}