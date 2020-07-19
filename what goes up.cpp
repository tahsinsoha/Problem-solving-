#include<bits/stdc++.h>
using namespace std;
# define inf INT_MAX
int n,ans;
//int seq[100];
vector<int>seq,v;
vector<int> :: iterator it;
int main()
{
    while(cin>>n)
    {
       // cin>>n;
        seq.push_back(n);

    }
    int sz = seq.size();
    int  L[sz+5], I[sz+5];
    for(int i=1; i<=seq.size(); i++)
        I[i]=inf;
    I[0]=-inf;
    int lis=0;
for(int i=0;i<sz;i++){
    int low=0,high=lis;

    while(low<=high){
            int mid= (low+high)/2;
        if(I[mid]<seq[i])  low=mid+1;
        else high= mid-1;
    }
    I[low]=seq[i];
    L[i]=low;
    if(low>lis) lis=low;

}
cout<<lis<<endl;
cout<<'-'<<endl;
lis++;
int now=inf;
for(int i=sz-1;i>=0;i--){
      if(lis==1) break;
    if(L[i]<now && lis==L[i]+1) {
            now=L[i];
    lis--;
    v.push_back(seq[i]);

}
}
reverse (v.begin(),v.end());
for(int i=0; i<v.size();i++){
    cout<<v[i]<<endl;

}

}
