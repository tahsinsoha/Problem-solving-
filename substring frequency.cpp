#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int cnt,n,m;
int pre[1000006];
void prepro(){
int q=0;
pre[1]=0;
for(int i=2;i<=m;i++){
    while(q>0&& s2[q+1]!=s2[i]){
        q= pre[q];
    }
    if(s2[q+1]==s2[i]) q++;
    pre[i]=q;
}

}
void kmp(){
memset(pre,0,sizeof(pre));
prepro();
int q=0;
for(int i=1;i<=n;i++){
    while(q>0&&s2[q+1]!=s1[i]){
        q=pre[q];
    }
    if(s2[q+1]==s1[i]) q++;
    if(q==m){
        cnt++;
        q=pre[q];
    }
}

}
int main(){

    ios_base::sync_with_stdio(0);cin.tie();

    int t,c=0;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
n=s1.size();
m=s2.size();

        s1=" "+s1;
        s2=" "+s2;


        cnt=0;
        kmp();
cout<<"Case "<<++c<<": ";
cout<<cnt<<endl;
    }
return 0;
}
