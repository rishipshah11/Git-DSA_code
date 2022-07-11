#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    int row = 3;
    int col = 4;

    int** arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the arr element : ";
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // delete arr of col
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    // delete arr of row
    delete [] arr;
    
    
    return 0;
}