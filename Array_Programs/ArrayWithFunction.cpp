#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
// Display the array
void Display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main()
{
    int arr[3] = {1,2,4};
    int n = 3;

    Display(arr,n);

    return 0;
}