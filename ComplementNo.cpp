#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    int n;
    cout<<"Enter n = ";
    cin>>n;

    int m = n;
    int ans;
    int mask = 0;

    /*

    while(mask < n)
    {
        mask = (mask << 1) | 1 ;
    }

    ans = (~n) & mask;
    cout<<"Ans = "<<ans;

    */

    while(m != 0)
    {
        // mask is intially 000...00 000

        mask = (mask << 1) | 1;

        // in m = 000.00 101 so here at 3rd position is one so for that we need 3 once in mask

        m = m >> 1;
    }


    ans = (~n) & mask;
    cout<<"Ans = "<<ans;

    return 0;
}