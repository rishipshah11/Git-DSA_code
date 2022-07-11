#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int majorityEle(int arr[],int n)
{
   int maxCount = 0;
   int index = -1;

   for (int i = 0; i < n; i++)
   {
       int count = 0;
       for (int j = 0; j < n; j++)
       {
           if(arr[i] == arr[j])
           {
               count++;
           }
       }

       if (count > maxCount)
       {
           maxCount = count;
           index = i;
       }
   }

   if (maxCount > n / 2)
   {
       	cout << arr[index] << endl;
   }

   else
   {
       cout << "No majority Element" << endl;
   }
   
   
   
}

int main()
{
    int arr[] = {3,3,4,2,4,4,3,4,4}; // n = 9 , majority element > ( n / 2 )

    int n = 9;

    cout << majorityEle(arr,n);
    return 0;
}