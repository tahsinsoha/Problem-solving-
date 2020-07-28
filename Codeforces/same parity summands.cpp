#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;
    cin>>t;
   long long int n,k;


    while(t--)
    {
       cin>>n>>k;
       long long d = n-(k-1);
       long long d1 = n - 2*(k-1);

       if(d%2 && d>0){
            cout<<"YES"<<endl;
        for(int i=1;i<=k-1;i++){
            cout<<1<<" ";
        }
        cout<<n-k+1<<endl;

       }
      else if(d1%2==0 && d1>0){
            cout<<"YES"<<endl;
        for(int i=1;i<=k-1;i++){
            cout<<2<<" ";
        }
        cout<<n-2*(k-1)<<endl;

       }

       else cout<<"NO"<<endl;

    }
    return 0;
}









