#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void sort012(int arr[],int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }

        if (arr[i] == 1)
        {
            count1++;
        }

        if (arr[i] == 2)
        {
            count2++;
        }
        
    }

    for (int i = 0; i < count0; i++)
    {
        // arr[8] = {1,1,0,2,0,2,1,0};

        arr[i] = 0; 

        // after that it look 

        // arr[8] = {0,0,0,2,0,2,1,0};
    }

    for (int i = count0 ; i < (count0 + count1); i++)
    {
        // arr[8] = {0,0,0,2,0,2,1,0};

        arr[i] = 1;

        // after that it look

        // arr[8] = {0,0,0,1,1,1, (aa nai) 1,0};
    }

    for (int i = (count0 + count1) ; i < n; i++)
    {
        // arr[8] = {0,0,0,1,1,1, (aa nai) 1,0};

        arr[i] = 2;

        // after that it look

        // arr[8] = {0,0,0,1,1,1,2,2};
    }


    

    
    
}

int main()
{
    int n = 8;
    int arr[8] = {1,1,0,2,0,2,1,0};

    sort012(arr,n);
    printArray(arr,n);
    
    
    return 0;
}