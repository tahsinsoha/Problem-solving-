#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int n=5;
bool rec(int i,int sum)
{
    if(i>5)
    {
        if(sum==23)
            return 1;

        return 0;
    }

    //  if(sum+arr[i]>)
    return rec(i+1, sum+arr[i])||
           rec(i+1, sum-arr[i]) ||
           rec(i+1, sum*arr[i]);
}
int main()
{

    while(1)
    {
        //int n;

        int p=0;
        for(int i=1; i<=5; i++)
        {


            cin>>arr[i];
            if(arr[i])
                p=1;

        }

        if(p==0)
        {
            return 0;
        }

        sort(arr+1,arr+1+5);
        int f=0;
        do
        {
            if(rec(2,arr[1]))
            {
                f=1;
                break;
            }
        }
        while(next_permutation(arr+1,arr+1+5));


        if(f==1)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;

    }



    return 0;

}













