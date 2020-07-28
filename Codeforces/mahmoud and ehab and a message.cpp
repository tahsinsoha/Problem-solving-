#include<bits/stdc++.h>
using namespace std;
int main(){

long long int  n,k,m,i,j,val,l,grp,p,strnmb,minn,q,sum=0,r,bleh;
map<string,long long int>mpp;
cin>>n>>k>>m;
vector<long long int>v;
string s[n],inp[m];
for(i=0;i<n;i++){
    cin>>s[i];
}
for(j=0;j<n;j++){
    cin>>val;
    mpp[s[j]]=val;
}
for(l=1;l<=k;l++){
    cin>>grp;
    //cin>>first;
     v.clear();
    for(p=0;p<grp;p++){
        cin>>strnmb;

        v.push_back(strnmb);
        if(p==0)minn=mpp[s[v[p]-1]];
       else minn=min(mpp[s[v[p]-1]],minn);
        }

for(r=0;r<v.size();r++) mpp[s[v[r]-1]]=minn;
}


for(int q=0;q<m;q++){
    cin>>inp[q];
    //cout<<mpp[inp[q]]<<" ";
    sum=sum+mpp[inp[q]];
}
cout<<sum;
return 0;
}
