#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int SWusingPrefix(int arr[],int n,int k)
{
   
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0; // sum start from 0
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if (sum == k)
            {
                count++;

                cout << i << " " << j << " ";
            }
        }
    }

    cout << endl << "Count numbers of pairs that is equals to " << k << " is : " <<count << " ";
}

int main()
{
    int arr[] = {1,3,2,2,3,1,5,4};

    int n = 8;

    int k = 4;

    SWusingPrefix(arr,n,k);
    return 0;
}