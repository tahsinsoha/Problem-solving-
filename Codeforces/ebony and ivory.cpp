#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,sub,flag=0,i,j;
cin>>a>>b>>c;
if(((c%a)==0)||((c%b)==0)) {
        flag=1;
    cout<<"Yes"<<endl;
    return 0;
}
for(i=1;i*a<=c;i++){
    sub=c-i*a;
        if(c%(i*a)==0){
            flag=1;
            cout<<"Yes"<<endl;
            return 0;
        }
        else {

            for(j=1;j*b<=sub;j++){
                if(j*b==sub){
                    flag=1;
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }

}

if (flag==0) cout<<"No"<<endl;






return 0;
}
