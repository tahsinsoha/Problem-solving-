#include<bits/stdc++.h>
using namespace std;
int main(){
int m[500][500];
int n,cont=0;
char c;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) {
        cin>>c;
        if(c=='.') m[i][j]=0;
        else m[i][j]=1;
    }
}
for(int i=1;i<n-1;i++){
    for(int j=1;j<n-1;j++)
    if(m[i][j]==1) {
        if(m[i-1][j-1]==1&&m[i+1][j+1]==1&&m[i-1][j+1]==1&&m[i+1][j-1]==1) cont++;
    }
}
cout<<cont<<endl;
return 0;
}
