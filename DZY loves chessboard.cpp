#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
string arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];

}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++){

        if(arr[i][j]=='.'){
            if((i+j)%2) arr[i][j]='W';
            else arr[i][j]='B';
        }
    }

}

for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
return 0;
}

