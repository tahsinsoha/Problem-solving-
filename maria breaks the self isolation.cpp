#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{



    int t;
    cin>>t;
    while(t--)
    {

       int n;
       cin>>n;
       for(int i=1;i<=n;i++) cin>>arr[i];

       sort(arr,arr+1+n);


      int cnt=1;

     // for(int i=1;i<=n;i++ ) cout<<arr[i]<<" ";

     // cout<<endl;

       for(int i=1;i<=n;i++){

        if((i)>=arr[i]) cnt= i+1;
       }

       cout<<cnt<<endl;
    }




    return 0;
}














