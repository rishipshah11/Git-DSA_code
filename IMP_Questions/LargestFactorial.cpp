#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int res[500];

int multiply(int x,int res[],int res_size)
{
    int carry = 0;
    
    // multiply with array element
    for(int i = 0 ; i < res_size ; i++)
    {
        int prod = res[i] * x + carry;

        res[i] = prod % 10;

        carry = prod / 10;
    }

    while (carry != 0)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void factorial(int n)
{
    res[0] = 1;
    int res_size = 1;

    // we want to array element so we modify in res_size
    for (int x = 2; x <= n; x++)
    {
        res_size = multiply(x,res,res_size);
    }

    // npow we have answer in the reverce order so we reverce the answer
    for (int i = res_size - 1; i >= 0; i--)
    {
        cout << res[i];
    }
    
}

int main()
{
    int n = 5;

    factorial(n);
    return 0;
}