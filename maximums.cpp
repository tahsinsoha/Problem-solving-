#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;

    int n,k;

       cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];

    long long maxx=0;
      long long prev = -1;
    for(int i=0;i<n;i++){

      cout<<maxx+arr[i]<<" ";
       maxx=max(maxx,maxx+arr[i]);

    }

    cout<<endl;



    return 0;
}


