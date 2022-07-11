#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    int count = 0;

    int n;
    cout<<"Enter n = ";
    cin>>n;

    while (n!=0)
    {
        if(n&1)
        {
            count++;
        }

        n = n >> 1;
    }
        cout << "Count = "<<count<<endl;
    
    return 0;
}