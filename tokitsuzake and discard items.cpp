#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,m,k,ans=0;
cin>>n>>m>>k;
long long arr[m+5];
for(int i=0;i<m;i++)
     cin>>arr[i];

for(int i=0;i<m;){
    long long cur = (arr[i]-i+k-1)/k;
    int j=i+1;
    for(;j<m;j++){
        long long tp= (arr[j]-i+k-1)/k;
        if(tp!=cur)
            break;


    }
    i=j;
ans++;
}

cout<<ans<<endl;
return 0;}

