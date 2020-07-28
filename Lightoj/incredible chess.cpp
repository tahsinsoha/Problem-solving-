#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>n;
    int w[n+5],b[n+5];
    for(int j=0;j<n;j++)
         cin>>w[j];
           for(int j=0;j<n;j++)
         cin>>b[j];
         int sum=0;

           for(int j=0;j<n;j++)
        {
            sum^=(b[j]-w[j]-1);

        }
        if(sum==0) printf("Case %d: black wins\n",i);
        else printf("Case %d: white wins\n",i);

}

return 0;
}
