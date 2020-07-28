#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,y;
string s;
cin>>n>>x>>y>>s;
int res=0;
for(int i = n-x; i<n;i++){
    if(i==n-y-1){
        if(s[i]!='1')
            res++;
    }
    else {
        if(s[i]!='0')
            res++;
    }


}
cout<<res<<endl;

return 0;
}
