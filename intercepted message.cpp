#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,inp1,inp2,inp3,inp4,i,j,k,l,cont=0;
    map<int,int>mpp;
    vector<int>a;
    vector<int>b;



     cin>>n;
     cin>>m;
     int cuma[n+5];
     int cumb[m+5];
    // a[0]=b[0]=0;
     cuma[0]=cumb[0]=0;
     for( i=1;i<=n;i++){
        cin>>inp1;
        a.push_back(inp1);

     }

for( j=1;j<=m;j++){
        cin>>inp2;
        b.push_back(inp2);

     }

for(k=1;k<=n;k++){
    cuma[k]=cuma[k-1]+a[k-1];
    mpp[cuma[k]]++;
}
for(l=1;l<=m;l++){
    cumb[l]=cumb[l-1]+b[l-1];
    mpp[cumb[l]]++;
    if(mpp[cumb[l]]==2){
        cont++;
    }
}
if(n==1) cout<<1<<endl;
 else cout<<cont<<endl;
    return 0;
}
