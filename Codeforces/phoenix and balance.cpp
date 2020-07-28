#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
int main()
{
    int t;
    cin>>t;
    long long int n;
    long long int d;
    vector<long long>v;
    while(t--)
    {

        cin>>n;
       n=(n/2)+1;
       d =1;
      for(int i=1;i<=n;i++){
         d*=2;
      }

      cout<<d-2<<endl;
    }

    return 0;
}















