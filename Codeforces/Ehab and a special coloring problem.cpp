#include<bits/stdc++.h>
using namespace std;
int ans[100010];
int main(){
int n,c=1;
cin>>n;
for(int i=2;i<=n;i++){
    if(!ans[i]){
            ans[i]=c;
    c++;
        for(int j=i;j<=n;j=j+i)
            ans[j]=ans[i];
    }
    cout<<ans[i]<<" ";
}
cout<<endl;
return 0;
}
