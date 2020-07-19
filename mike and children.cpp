#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,ans;
    map<int,int>mpp;
    int arr[1010];
    cin>>n;
    int maxx=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
        {
           temp= arr[i]+arr[j];
           mpp[arr[i]+arr[j]]++;
                 maxx=max(maxx,mpp[arr[i]+arr[j]]);
        }
      cout<<maxx<<endl;
    return 0;
}
