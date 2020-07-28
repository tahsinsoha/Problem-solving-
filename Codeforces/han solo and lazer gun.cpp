#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,x1,y1,snow=0;
cin>>n>>x>>y;
set<double>s;


for(int i=1;i<=n;i++){
       cin>>x1>>y1;
        if(x==x1) snow++;
        else {
            double m;
            m=double(y-y1)/double(x-x1);
            s.insert(m);
        }
}
if(snow>0) cout<<s.size()+1<<endl;
else cout<<s.size()<<endl;

return 0;
}
