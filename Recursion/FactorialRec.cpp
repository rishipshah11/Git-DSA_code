#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int factorial(int n)
{
    int ans;
    // base case 

    //  IMP --> ek case me kar lunga and bakika ka Recursion sambhallega 

    if(n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
    
}

int main()
{
    int n = 5;
    cout << "Factorial of num : " << factorial(n) << endl;
    return 0;
}