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

void sortOnce(int arr[],int n)
{
    int left = 0;
    int right = n-1;

    int step = 0;

    while (left < right)
    {
        cout<<"Step = "<< step++ << endl;
        printArray(arr,n);
        cout<<endl;

        while(arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        if(arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    
}

int main()
{
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOnce(arr,8);


    cout<<"This is main sorted array :"<<endl;
    printArray(arr,8);
  
    return 0;
}