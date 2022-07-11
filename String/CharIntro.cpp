#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int getLength(char name[])
{
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }

    return length ;
    
}

int main()
{
    char name[20];

    cout << "Enter your name : "; // for whole line use getLine
    cin >> name;

    cout << "Length : " << getLength(name) << endl;
    return 0;
}