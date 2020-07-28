#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];

    sort(arr+1,arr+1+n);
    int minn = INT_MAX;

    for(int i=2;i<=n;i++){
     minn = min(minn, arr[i]-arr[i-1]);

    }
    cout<<minn<<endl;
}



return 0;


}















