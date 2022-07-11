#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    int n;
    cout<<"Enter n = ";
    cin>>n;

    int ans = 0;
    int i = 0;
    while (n!=0)
    {
        int bit = n & 1; // for last bit

        ans = (bit * pow(10 , i)) + ans; // decimal to binary

        n = n >> 1;
        i++;
    }

    cout<<"Ans = "<<ans<<endl;
    
    return 0;
}