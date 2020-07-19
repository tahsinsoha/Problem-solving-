#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,dis,input,sum=0;
vector<long long int>v;
cin>>n>>dis;
if(n==1){
    cout<<"1"<<endl;
    return 0;
}
for(int i=0;i<n;i++){
cin>>input;
v.push_back(input);

}
for(int i=0;i<n-1;i++){
     if((v[i+1]-v[i])<=dis){
        sum=sum+1;
     }
     else {
        sum=sum-sum;
     }
}

cout<<sum+1<<endl;


return 0;
}
