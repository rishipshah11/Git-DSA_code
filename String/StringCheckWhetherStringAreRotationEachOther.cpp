#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
// brute force
/*
bool rotation(string a,string b)
{
    if (a.length() != b.length())
    {
        return false;        
    }
    int n = a.length();
    for (int i = 0; i < n; i++)
    {   
        a[i] = a[n-1];
        a[n-1] = a[n-2];

        for (int j = 0; j < b.length(); j++)
        {
            if(a[i] == b[j])
            {
                return true;
            }
        }
    }
   return false;
}
*/

// optimal and most importtant solution

bool checkWhetherRotationEqual(string a,string b)
{
    if (a.length()!=b.length()) // if both strings size is not equal than return false
    {
        return false;
    }

    // npos = no position match

    string temp = a + a;

    if (temp.find(b) == string::npos)
    {
        return false;
    }

    else
    {
        return true;
    }
    
}

int main()
{
    string a = "bbarba";
    string b = "babbar";
    cout << checkWhetherRotationEqual(a,b);
    return 0;
}