#include<bits/stdc++.h>
using namespace std;
int main(){
int n,input;
vector<int>v;
cin>>n;
for(int i=0;i<n;i++){
cin>>input;
v.push_back(input);
}

for(int j=0;j<n;j++){
    if(j==0){
        cout<<abs(v[0]-v[1]);
        cout<<" "<<abs(v[0]-v[n-1]);
        cout<<endl;
    }
    else if(j==n-1){

        cout<<abs(v[n-1]-v[n-2]);
        cout<<" "<<abs(v[n-1]-v[0]);
        cout<<endl;
    }
    else {
        cout<<min(abs(v[j]-v[j+1]),abs(v[j]-v[j-1]));
        cout<<" "<<max(abs(v[j]-v[0]),abs(v[j]-v[n-1]));
        cout<<endl;
    }
}





return 0;
}
