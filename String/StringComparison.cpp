#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void print(char chars[],int n)
{
    for (int i = 0; i < 6; i++)
    {
        cout << chars[i] << " " " ";
    }
    cout << endl;
    
}

int checkComaprison(char chars[],int n)
{
    // 2 pointer approch
    int i = 0;
    int ansIndex = 0;

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        // old cahr store karlo
        chars[ansIndex++] = chars[i];
        
        // now for counting for the numbers
        int count = j - i;

        if(count > 1)
        {
            // converting counting into single digit
            string cnt = to_string(count);
            for(char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }

        // now i comes at j position and check onwards
        i = j;
    }
    // return the ansIndex
    return ansIndex;

    
}

int main()
{
    char chars[] = {'a','a','b','b','b','c','c','c'};

    // o/p = {'a','2','b','3','c','3'};

    int n = 8;
    cout << checkComaprison(chars,n);

    cout << endl;

    print(chars,n);
    return 0;
}