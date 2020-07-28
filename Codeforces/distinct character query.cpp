#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
char c;
int l,r,pos,a,b;
cin>>s;
int q;
cin>>q;
for(int i=0;i<q;i++){

    if(cin>>a>>pos>>c && (c>='a' && c<='z')){
        cout<<1<<endl;
    }
 else if(cin>>b>>l>>r){
        cout<<0<<endl;
    }

}

return 0;
}
