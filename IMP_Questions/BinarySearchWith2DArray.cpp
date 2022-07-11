#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

bool binarySearch(int arr[][3],int n,int m,int row,int target)
{
    int s = 0;
    int e = m - 1;

    int mid = s + (e-s)/2;

    while (s <= e)
    {
        if (arr[row][mid] == target)
        {
            cout << row << " " << mid << endl;
            return true;
        }

        if (arr[row][mid] < target)
        {
            s = mid + 1;
        }
        else if(arr[row][mid] > target)
        {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    
}

bool search(int arr[][3],int n,int m,int target)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s <= e)
    {
        // check for the starting element if it is equal to target then return true
        if (arr[mid][0] == target)
        {
            cout << mid <<" " << 0;
            return true;
        }

        // check ending element of row 
        if (arr[mid][m-1] == target)
        {
            cout << mid << " " << m - 1;
            return true;
        }

        // check if element is present in between starting and ending element

        if (target > arr[mid][0] && target < arr[mid][m-1])
        {
            // applied binary search on column

            bool ans = binarySearch(arr,n,m,mid,target);
            return ans;
        }

        // check upper part

        if (target < arr[mid][0])
        {
            e = mid - 1;
        }

        // check lower part

        if (target > arr[mid][m - 1])
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

// void bruteForce(int arr[][3],int n,int m,int target)
// {
//     for (int i = 0; i < m; i++)
//     {
//         cout << " i at current index : " << i << endl;

//         for (int j = 0; j < n; j++)
//         {
//             cout << " j at current index : " << j << endl;

//             if(arr[i][j] == target)
//             {
//                 return;
//             }
//         }

//         cout << " j loop end : "  << endl;
//     }
    
//     cout << " i loop end : "  << endl;
    
// }

int main()
{
    int arr[3][3] = {1,5,9,14,20,23,30,34,43};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl ;
    // }

    int n = 3;
    int m = 3;

    int target = 34;

    cout << search(arr,n,m,target);
    
    return 0;
}