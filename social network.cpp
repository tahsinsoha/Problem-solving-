#include<bits/stdc++.h>
#include <iostream>
#include <ctime>
#include <stack>
#include <deque>
#include <algorithm>
using namespace std;
map<int,int>mp;
int main(){
int n,k,a;
deque<int>d;
cin>>n>>k;

for(int i=0;i<n;i++){
    cin>>a;
    //deque<int>::iterator it = find(numbers.begin(), numbers.end(), a);
   if (mp[a]==1) continue;
   // if ((find(d.begin(), d.end(), a))) d.push_front(a);
  else    if( (mp[a]==0) && d.size()==k){
           // d.pop_back();
        int m=d[d.size()-1];
            mp[m]=0;
            d.pop_back();

            d.push_front(a);
            mp[a]=1;
    }
    else if((mp[a]==0) && d.size()<k) {
            d.push_front(a);
            mp[a]=1;
            }



}
cout<<d.size()<<endl;
for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
cout<<endl;

return 0;
}

