#include<bits/stdc++.h>
using namespace std;
int main(){
int  n,cont=0;
double inp,sum=0,ans,ans2;
vector<double >v;
cin>>n;
for(int i=1;i<=n;i++ ){
    cin>>inp;
     v.push_back(inp);
     sum=sum+inp;
}
sort(v.begin(),v.end());
ans=(double)(sum/n);
if(ans>=4.5){
    cout<<0<<endl;
    return 0;

}
 else {
    for(int j=0;j<n;j++){
        sum=sum+5-v[j];
        ans2=(double)(sum/n);
        cont++;
        if(ans2>=4.5){
               break;
        }
    }
 }

cout<<cont<<endl;



return 0;
}
