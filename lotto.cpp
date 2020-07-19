#include<bits/stdc++.h>
using namespace std;
int arr[25];
int n;
void lotto(vector<int>v, bool taken[], int last) {
 if(v.size()==6) {
cout<<v[0];
        for(int i=1;i<6;i++)
            cout<<" "<<v[i];
        cout<<endl;
        return;
 }
 for(int i= last+1; i<n;i++){
    if (taken[i]) continue;
         taken[i]=1;
         v.push_back(arr[i]);
         lotto(v,taken,i);
         taken[i]=0;
         v.pop_back();

 }
}
int main(){
    int t=0;
while(cin>>n && n!=0) {
     for(int i=0;i<n;i++) cin>>arr[i];
        bool taken[25];
          memset(taken,0,sizeof(taken));
          vector<int>v;
          if(t!=0) cout<<endl;
          lotto(v,taken,-1);
          t++;

}
return 0;
}
