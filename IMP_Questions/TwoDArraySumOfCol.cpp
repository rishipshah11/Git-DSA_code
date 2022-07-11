#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int colSum(int arr[4][2],int row,int col)
{
    int maxi = INT_MIN;

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }

        maxi = max(maxi,sum);
        cout << sum << " ";
        
    }

    return maxi;
    cout << endl;
    
}

void rowSum(int arr[4][2],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }

        cout << sum << " ";
        
    }
    cout << endl;
    
}

int main()
{
    int arr[4][2];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter Array elements : ";
            cin>>arr[i][j];
        }
        
    }

   colSum(arr,4,2);


    return 0;
}