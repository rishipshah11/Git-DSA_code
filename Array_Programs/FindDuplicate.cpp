#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    int ans = 0;

    int arr[5] = {1,2,3,4,3};

    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++) // XOR with array indexes ( 1 to n-1 )
    {
        ans = ans ^ i;
    }

    cout<< ans <<endl;
    
    
    return 0;
}