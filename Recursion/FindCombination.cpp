#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int findCombination(string input,int i,string output)
{
    // base case
    if (i == input.length())
    {
        cout << output << endl << endl;
        return 0;
    }

    char ch = input[i];

    cout << "Here character is : " << ch << endl << endl;

    // no space
    output.push_back(ch);

    int ans = findCombination(input,i+1,output);

    cout << " After no space complete : " << ans << endl << endl;

    // space
    cout << " Before the space : " << ans << endl << endl;

    output.push_back(' ');

    cout << " After the space : " << ans << endl << endl;

    cout << " At after space output is -> " << output << endl << endl;

    if(input[i+1] != '\0')
    {
        cout << "For the checking the last position : " << endl << endl;
       findCombination(input,i+1,output);
    }
    
    
}

int main()
{
    string output = " ";

    string input;
    cout << "Enter your input : ";
    cin >> input;

    findCombination(input,0,output);

    return 0;
}