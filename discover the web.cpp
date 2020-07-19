#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
for(int i=1;i<=t;i++){
       cout<<"Case "<<i<<":"<<endl;
       string s;

       stack<string>forr;
       stack<string>backk;
       string cur="http://www.lightoj.com/";
      // backk.push(cur);
       while(cin>>s && s!="QUIT"){
       if(s=="VISIT"){
        backk.push(cur);
        cin>>cur;
       // cout<<cur<<endl;
        forr=stack<string>();
                cout<<cur<<endl;

       }
       else if(s=="BACK"){
            if(backk.empty()) cout<<"Ignored"<<endl;
             else {
                forr.push(cur);
                cur=backk.top();
                backk.pop();
                cout<<cur<<endl;
             }

       }
        else if(s=="FORWARD"){
            if(forr.empty()) cout<<"Ignored"<<endl;
             else {
                backk.push(cur);
                cur=forr.top();
                forr.pop();
                cout<<cur<<endl;
             }

       }
       else break;


    }

}





return 0;
}
