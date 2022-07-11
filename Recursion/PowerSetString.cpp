#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void printPowerSet(string input,int index,string output)
{
    // base case
    if(index == input.length())
    {
        cout << output << endl;
        return;
    }

    // exclude wala case

    char ch = input[index];

    // exclude ch

    printPowerSet(input,index+1,output);

    // include ch
    output.push_back(ch);

    printPowerSet(input,index+1,output);

}

int main()
{
    string str;
    cout << "Enter your String : ";
    cin >> str;

    string output = " ";
    
    printPowerSet(str,0,output); 
    return 0;
}