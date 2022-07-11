#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

bool getAnagram(string a,string b)
{
    int arr[26] = {0};

    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        // int num = 0;
        int num = ch - 'a';
        arr[num]++;
    }
     for (int i = 0; i < b.length(); i++)
    {
        char ch = b[i];
        // int num = 0;
        int num = ch - 'a';
        arr[num]--;
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i] != 0)
        return false;
    }

    return true;
}

// using map
/*
bool getAnagram(string a,string b)
{
    int arr[26] = {0};
    map <char,int> m // we go from char to int

    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        m[ch]++
    }
     for (int i = 0; i < b.length(); i++)
    {
        char ch = b[i];
        m[ch]--;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if(m[i] != 0)
        return false;
    }

    return true;
}
*/

int main()
{
    string a = "rishi";
    string b = "ihsri";

    cout << getAnagram(a,b);
    return 0;
}