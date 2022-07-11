#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

char flip(char ch)
{
    return (ch == '0')? '1' : '0';
}

int getFlips(string s,char expected)
{
    int countFlips = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != expected)
        {
            countFlips++;
        }
        expected = flip(expected);
    }
    return countFlips++;
    
}

// void getFlip(string s,char expexted)
// {
//     int n = s.length();
//     for (int i = 0; i < n; i++)
//     {
//         if(i&1) // even
//         {
//             cout << '1' << " ";
//         }

//         else
//         {
//             cout << '0' << " ";
//         } 
//     }
    
// }

int main()
{
    string s = "0010";

    // if ans start with 0
    int ans0 = getFlips(s,'0');
    int ans1 = getFlips(s,'1');

    int ans = min(ans0,ans1);
    cout << ans;
    return 0;
}