#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,m,p;
cin>>n;
set<int>s;
cin>>m;
for(int i=0;i<m;i++)
{
cin>>a;
s.insert(a);

}
cin>>p;
for(int i=0;i<p;i++)
{
cin>>a;
s.insert(a);

}

if(s.size()==n)
    cout<<"I become the guy."<<endl;

    else
        cout<<"Oh, my keyboard!"<<endl;

return 0;
}




