#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

bool checkEqual(int a[26],int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if(a[i] != b[i])
        {
            return false;
        }
    }
    return true;
    
}

bool CheckPermutationString(string s1,string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 sttring in window size of s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // running for the first window

    while (i < windowSize)
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    // now check if it equal
    if(checkEqual(count1,count2))
    return true;

    // aage window process kardo
    while (i < s2.length())
    {
        // naya element add karo and previous element remove kardo
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];

        index = oldChar - 'a';
        count2[index]--;
        i++;

        // now check if it equal
        if(checkEqual(count1,count2))
        return true;
    }
    return false;
        
}

int main()
{ // using sliding window

    string s2 = "eidba";
    string s1 = "ab";

    cout << CheckPermutationString(s1,s2);

    return 0;
}