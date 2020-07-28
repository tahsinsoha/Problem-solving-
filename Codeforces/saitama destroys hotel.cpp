#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s,f,tym,maxx,ind,sum;
//vector<int>vf;
//vector<int>vtym;
    cin>>n>>s;
maxx=s;
    for(int i=0;i<n;i++){
        cin>>f>>tym;
       maxx=max(maxx,f+tym);
        }


 cout<<maxx<<endl;


return 0;
}
