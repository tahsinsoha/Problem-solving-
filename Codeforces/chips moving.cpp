#include<bits/stdc++.h>
using namespace std;
int main(){
int e=0,o=0,n,m;
cin>>n;
for(int i=0;i<n;i++ ){
    cin>>m;
    if(m%2==0) e++;
    else o++;
}
cout<<min(e,o)<<endl;
return 0;
}
