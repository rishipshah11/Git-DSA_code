#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int setBitA(int a)
{
    int count = 0;

    while (a!=0)
    {
        if(a&1)
        {
            count++;
        }
        a = a >> 1;
    }
     return count;
}

int setBitB(int b)
{
    int count = 0;

    while (b!=0)
    {
        if(b&1)
        {
            count++;
        }
        b = b >> 1;
    }
     return count;
}

int main()
{
    
    /*
    while(1)
    {
        cout<<"How are you ??"<<endl;
        int num = 1;
        switch (num)
        {
        case 1:
            cout<<"I am fine"<<endl;
            break;
        
        default:cout<<"Hello";
            break;
        }

        // now for break this infinite loop we use exit(0) statement
        exit(0);
    }
    
    // -----------------------------------------------------------------------------------------------------------------------------------

   // Problem --> count how many notes of given amount using switch case

   int totalAmt;
   cout<<"Enter totalAmount = ";
   cin>>totalAmt;

   int Rs100 = 0 , Rs50 = 0 , Rs20 = 0 , Rs1 = 0;
   int reminder = 0;

   switch (1)
   {
   case 1:
       Rs100 = totalAmt/100;
       reminder = totalAmt % 100;

       cout<<"Total no. of 100 notes are : "<<Rs100<<endl;

       Rs50  = reminder / 50;
       reminder = reminder % 50;
       cout<<"Total no. of 50 notes are : "<<Rs50<<endl;

        Rs20  = reminder / 20;
       reminder = reminder % 20;
       cout<<"Total no. of 20 notes are : "<<Rs20<<endl;

        Rs1  = reminder / 1;
       reminder = reminder % 1;
       cout<<"Total no. of 1 notes are : "<<Rs1<<endl;

       break;
   
   default:
       break;
   }

   */

    // Problem --> total number of set bit ina & b  { in sort total no. of once in a & b } using function

    int a,b;
    cout<<"Enter a, b = ";
    cin>>a>>b;

    int ans1 = setBitA(a);
    int ans2 = setBitB(b);

    int ans = ans1 + ans2;

    cout<<"Total no. of set bit of A and B are : "<<ans<<endl;



    return 0;
}