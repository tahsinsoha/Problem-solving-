#include<bits/stdc++.h>
using namespace std;
int main(){
int n,input,i,j,flag=0;
vector<int>v;
cin>>n;
for(int i=0;i<n;i++){
cin>>input;
v.push_back(input);

}

sort(v.begin(),v.end());


if(v[0]>1){
    cout<<"1"<<endl;
    return 0;
}
if(n==1){
    cout<<v[0]+1<<endl;
    return 0;
}
for(int j=0;j<=n-2;j++){

if((v[j+1]-v[j])==1||(v[j+1]-v[j])==0) {

    flag=1;
    continue;
}
else {
        flag=0;
        cout<<v[j]+1<<endl;
break;
}
}
if(flag==1){
    cout<<v[v.size()-1]+1<<endl;
}
else {return 0;}

return 0;
}
