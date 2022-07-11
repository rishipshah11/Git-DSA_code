#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int FirstRepeat(vector<int>&arr,int n)
{
    // mark vector as unvisited
    vector<bool> visited(n,false);

    // check for each index in vector for every element in array
    for (int i = 0; i < n; i++)
    {
        // if the visited element comes again than return array element
        if (visited[arr[i]])
        {
            return arr[i];
        }

        // else mark it visited and so on......
        visited[arr[i]] = true;
    }
    return -1;
}


// by algorithmic way

int repeat(int arr[], int n)
{
	int slow = arr[0], fastt = arr[0];

	do{
		slow = arr[slow];
		fastt = arr[arr[fastt]];
	
	}while(slow != fastt);
	
	slow = arr[0];

	while(slow != fastt)
	{
		slow = arr[slow];
		fastt = arr[fastt];
	}
	return slow;
}


int main() {
    
    // optimize
    int arr[] = {1, 3, 2, 4, 6, 5, 7, 3} , n= 8;

    cout << repeat(arr, n);

    // B.F

    // vector<int>arr1;
    // arr1.push_back(1);
    // arr1.push_back(3);
    // arr1.push_back(2);
    // arr1.push_back(4);
    // arr1.push_back(6);
    // arr1.push_back(5);
    // arr1.push_back(7);
    // arr1.push_back(3);

    // cout << FirstRepeat(arr,n);

}