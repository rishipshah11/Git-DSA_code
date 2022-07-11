#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mCol = 3;
    int nRow = 3;

    for (int col = 0; col < mCol; col++)
    {
        if (col & 1)
        {
            // odd Index -> Bottom to Top
            for (int row = nRow - 1; row >= 0; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            // odd Index -> Top to Bottom
            for (int row = 0; row < nRow; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }

    return 0;
}