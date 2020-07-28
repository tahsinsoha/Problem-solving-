#include<bits/stdc++.h>
using namespace std;
int main(){
long long int m,a,x,n,b,y,sum=0;
map<long long int,long long int>mpp;
cin>>m;
for(int i=1;i<=m;i++){
    cin>>a>>x;
mpp[a]=x;
sum=sum+x;
}
cin>>n;
for(int j=1;j<=n;j++){
    cin>>b>>y;
if(mpp[b]<y or mpp[b]==0){
sum=sum+y-mpp[b];
}

}

cout<<sum<<endl;


return 0;
}
