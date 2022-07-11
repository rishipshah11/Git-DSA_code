#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int solve(int coins[],int n,int amount,int currentCoin)
{
    if (amount == 0)
    {
        cout << "base case reached -> returning 1 "<< endl;
        return 1;
    }

    if (amount < 0)
    {
        cout << "base case reached -> returning 0 "<< endl;
        return 0;
    }

    int ways = 0;

    for (int i = currentCoin; i < n; i++)
    {
        int ans = solve(coins,n,amount-coins[i],i);
        cout << "For i : " << i << " ans is : " << ans << endl;
        ways = ways + ans;
    }

    cout << "outside for loop , value of ways is : " << ways << endl;

    return ways;
    
}

int main()
{
    int coins[] = {1,2};
    int amount = 4;

    int size = 2;

    int ans = solve(coins,size,amount,0);

    cout << ans << endl;
    return 0;
}