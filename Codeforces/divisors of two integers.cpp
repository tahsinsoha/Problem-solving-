#include<bits/stdc++.h>
using namespace std;
map<int,int>mpp;
vector<int>v;
map<int,int>cont;
int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++ ){
        cin>>x;
        v.push_back(x);
        mpp[x]++;
    }
sort(v.begin(),v.end());
for(int i=0;i<n;i++){cout<<v[i]<<' ';}
cout<<endl;

int first= v[n-1];
int flag=0;
for(int i=0;i<n;i++){
    if(first%v[i]==0&&mpp[v[i]]==2){
        v.erase(v.begin()+i);
        cont[v[i]]++;
        mpp[v[i]]--;
    }
    if(cont[v[i]]==0&&mpp[v[i]]==1&&first%v[i]==0) {
        v.erase(v.begin()+i);
        mpp[v[i]]--;
    }
}
sort(v.begin(),v.end());
for (int i=0;i<v.size();i++) {cout<<v[i]<<' ';}
cout<<endl;
int endd = v[v.size()-1];
cout<<first<<' '<<endd<<endl;


    return 0;
}
