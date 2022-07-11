#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    // we intialize the array with any valueby using fill_n command

    int arr[5];
    fill_n(arr,5,1); // printing the value for 5 times

    // now printing the array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}