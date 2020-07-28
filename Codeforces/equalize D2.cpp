#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>koyta,step;
map<int,int> :: iterator it;
int arr[200007];
int main(){

int n,k;
cin>>n>>k;
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);
for(int i=0;i<n;i++){
    long long now=0;
    koyta[arr[i]]++; // arr[i] er shoman koyta korsi
    step[arr[i]]+=0; // arr[i] banaite koyta step lagse
    while(arr[i]){
         arr[i]/=2, koyta[arr[i]]++,now++;
         if(koyta[arr[i]]<=k)
              step[arr[i]]+=now;
    }


    }
long long ans = 10e18;
    for(auto x: koyta){
        if(x.second>=k)
             ans = min(ans,step[x.first]);
    }
cout<<ans<<endl;

return 0;
}
