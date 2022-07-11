#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int isValid(int arr[],int cooks,int reqParatha,int mid)
{
    int time = 0;
    int paratha = 0;
    for (int i = 0; i < cooks; i++)
    {
        time = arr[i];
        int j = 2; // Rank as per given in question

        while (time <= mid)
        {
            paratha++;
            time = time + (arr[i] * j); 
            j++;     
        }
        if (paratha >= reqParatha)
        {
            return 1;
        }
    }
    return 0;
    
}
/*

int isValid(int arr[],int cooks,int reqParatha,int mid)
{
    int time = mid;
    int paratha = 0;
    int sum = 0;
    for (int i = 0; i < cooks; i++)
    {
        int j = 2; // Rank as per given in question

        while (time > 0)
        {
            time = time - (arr[i] * j);
            while(time > 0)
            { 
                paratha++;
                j++;
            } 
        }
        sum = sum + paratha;
        if (sum >= reqParatha)
        {
            return 1;
        }
    }
    return 0;
}

*/

int checkAns(int arr[],int cooks,int paratha)
{
    int s = 0;
    int e = 1e8; // (arr[0]*(paratha * paratha+1))/2; // arr[0] = first cook
    int ans = 0;
    while (s<=e)
    {
        int mid = s + (e-s)/2;

        if(isValid(arr,cooks,paratha,mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
            s = mid + 1;

    }
    return ans;
    
}

int main()
{
    int par;
    cout << " Enter no. of paratha : ";
    cin >> par;

    int cooks;
    cout << "Enter no. of cooks : ";
    cin >> cooks;

    int arr[cooks];

    for (int i = 0; i < cooks; i++)
    {
        cout << "Enter array element : ";
        cin >> arr[i];
    }

    cout << checkAns(arr,cooks,par);
        
    
    
    return 0;
}