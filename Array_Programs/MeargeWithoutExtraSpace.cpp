#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void meargeWithoutExtraSpace(int arr1[],int arr2[],int n,int m)
{
    int j = 0;
    int i = n - 1;

    while (arr1[i] > arr2[j] && i >= 0 && j < m)
    {
        swap(arr1[i],arr2[j]);

        i--;
        j++;
    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    
}

int main()
{
    int arr1[] = {1,3,5,7};

    int arr2[] = {0,2,6,8,9};

    int n = 4;

    int m = 5;

   

    meargeWithoutExtraSpace(arr1,arr2,n,m);

   for (int i = 0; i < n; i++)
   {
       cout << arr1[i] << " ";
   }

   for (int j = 0; j < m; j++)
   {
       cout << arr2[j] << " ";
   }
   
   
   
   
    return 0;
}