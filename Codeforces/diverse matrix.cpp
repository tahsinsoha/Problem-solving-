#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;

if(n==1 && m==1){
    cout<<0<<endl;
    return 0;
}
int k=2;
if(n==1 || m==1){
for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++)
     {
        cout<<k<<" ";
        k++;
     }
     cout<<endl;

}
return 0;
}

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=m;j++)
    {

        cout<<i*(j+n)<<" ";
    }
    cout<<endl;
}


return 0;
}
