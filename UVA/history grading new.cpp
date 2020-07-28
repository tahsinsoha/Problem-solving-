#include<bits/stdc++.h>
using namespace std;
int lcs[21][21],given[21],now[21];
int main(){
//int lcs[21][21],given[21],now[21];
int n,x;
cin>>n;
for(int i=0;i<n;i++){
 cin>>x;
 given[x-1]=i;
}
while(cin>>x){
    now[x-1]=0;
    for(int i=1;i<n;i++){
        cin>>x;
        now[x-1]=i;
    }
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(i==0||j==0) lcs[i][j]=0;
      else  if(given[i-1]==now[j-1]) lcs[i][j]=1+lcs[i-1][j-1];
         else {
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
         }
    }
}
cout<<lcs[n][n]<<endl;

}

return 0;
}
