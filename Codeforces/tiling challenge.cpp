#include<bits/stdc++.h>
using namespace std;
string s;

int main(){
int n;
cin>>n;
int arr[n+5][n+5];
for(int i=0;i<n;i++){
        cin>>s;
    for(int j=0;j<n;j++){
           if (s[j]=='.') arr[i][j]=0;
           else arr[i][j]=1;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
           if((i==0 && j==0) || (i==0 && j== n-1)){
            if(arr[i][j]==0) {
                 cout<<"NO"<<endl;
                 return 0;
            }
           }
     else if(j==0 || j== n-1 || i== n-1){
        if(arr[i][j]==0) {
            cout<<"NO"<<endl;
            return 0;
        }
     }

    else {
            if(arr[i][j]==0){
                if(arr[i+1][j]==0 && arr[i+1][j-1]==0 && arr[i+1][j+1]==0 && arr[i+2][j]==0){
                    arr[i][j]=1;
                    arr[i+1][j]=1;
                    arr[i+1][j-1]=1;
                    arr[i+1][j+1]=1;
                    arr[i+2][j]=1;
                }
                else {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }

    }

}
}
cout<<"YES"<<endl;
return 0;
}
