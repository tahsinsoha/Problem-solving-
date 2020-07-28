#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
string t;
cin>>s;
cin>>t;
int rem = s.size()-t.size();
int ans = 0;
for(int i=0;i<s.size();i++){
       for(int j=0;j<rem;j++){
        if(i+j+1>s.size()) break;
        string q =s;
        q.erase(q.begin()+i,q.begin()+i+j+1);
           cout<<q<<endl;
        int m=0;
        for(int n=0;n<q.size();n++)
            if(q[n]==t[m]) m++;
        if(m==t.size() ) ans = max(ans,j+1);

        }

}
cout<<ans<<endl;
return 0;
}
