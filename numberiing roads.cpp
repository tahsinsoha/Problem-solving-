#include<bits/stdc++.h>
using namespace std;

int main(){
int r,n;
int tc=0;
while(cin>>r>>n){
    if(r==0&&n==0){
        return 0;
    }
    if(n+n*26<r){
            tc++;
        cout<<"Case "<<tc<<": impossible"<<endl;
        continue;
    }
    else {
        for(int i=1;i<=26;i++){
            if(n+i*n>=r){
                    if(i==1){
                        tc++;
                        cout<<"Case "<<tc<<": "<<i<<endl;
                        //cout<<i<<endl;
                         break;
                    }
                   else {
                       tc++;
                       cout<<"Case "<<tc<<": "<<i<<endl;
                   break;
                   }
            }

        }
    }
}

return 0;
}

