#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int minn = min(n,m);
cout<<minn+1<<endl;
for(int i=0;i<=minn;i++)
    cout<<i<<" "<<minn-i<<endl;


return 0;
}
