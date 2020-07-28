#include<bits/stdc++.h>
using namespace std;
int main(){

long long int n;
cin>>n;
long long int l,r,d;
for(int i=0;i<n;i++){
    cin>>l>>r>>d;
    if(d<l) cout<<d<<endl;
    else {
long long int p=r/d;
cout<<(p+1)*d<<endl;
    }

}




return 0;
}
