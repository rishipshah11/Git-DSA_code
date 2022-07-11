#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int OptimalStrategy(int arr[],int i,int j)
{
    // base case
    if(i > j)
    {
        return 0;
    }

    int choice1 = arr[i] + min(OptimalStrategy(arr,i+2,j),OptimalStrategy(arr,i+1,j-1));

    // 20 30 2 2 2 10
    //  i           j

    int choice2 = arr[j] + min(OptimalStrategy(arr,i+1,j-1),OptimalStrategy(arr,i,j-2));

    int ans = max(choice1,choice2);
    return ans;

}

int main()
{
    int arr[] = {20,30,2,2,2,10};
    int n = 6;

    int i = 0;
    int j = 5;

    cout << "Ans " << OptimalStrategy(arr,i,j) << endl;

    return 0;
}