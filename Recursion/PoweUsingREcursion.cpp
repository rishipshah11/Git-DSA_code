#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int power(int a,int b)
{
    // base case
    if(b == 0)
    return 1;

    if(b == 1)
    return a;

    // RECURSIVE CALL
    int ans = power(a,b/2);

    if(b % 2 == 0)
    {//even
        return ans * ans; // ans --> Recursive call
    }
    else
    {//odd
        return a * ans * ans;
    }
    
}

int main()
{
    int a,b;
    cout <<"Enter a,b : ";
    cin >> a >> b;

    cout << power(a,b) << endl;
    return 0;
}