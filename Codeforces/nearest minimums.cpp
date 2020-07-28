#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,input,mini,j,n1,n2,ans,s,sub;
vector<int>arr;
vector<int>arr2;
cin>>n;
for(i=0;i<n;i++){
cin>>input;
arr.push_back(input);
}
mini=arr[0];
for(i=0;i<n;i++){
    if(arr[i]<=mini){
        mini=arr[i];
    }

}
j=0;
for(i=0;i<n;i++){
    if(arr[i]==mini){
    arr2.push_back(i);
}

}
s=arr2.size();
ans=arr2[s-1];
for(i=0;i<arr2.size();i++){
        if((i+1)==arr2.size()){break;}
        sub=arr2[i+1]-arr2[i];
        if(sub<ans){ans=sub;}
}
printf("%d\n",ans);
return 0;
}
