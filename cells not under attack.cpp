#include<bits/stdc++.h>
using namespace std;
long int vr[100007];
long int vc[100007];

int main()
{
    long long int n,m;
    cin>>n>>m;
long long int r=0, c=0;
long long int x,y;
    for(long long int i=1;i<=m;i++){
        cin>>x>>y;


        if(!vr[x]){
             r++;
             vr[x]=1;
        }
          if(!vc[y]){
             c++;
             vc[y]=1;
        }

        cout<<(n-r)*(n-c)<<" ";
    }

    return 0;
}








