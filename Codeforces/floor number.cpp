#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

       if(n==1 || n==2)
       {
           cout<<1<<endl;

       }

       else {

        cout << ((n-2+k-1)/k)+1<<endl;
       }



    }


    return 0;

}















