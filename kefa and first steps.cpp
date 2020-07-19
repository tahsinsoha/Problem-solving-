#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n+5];
int cnt=1;

for(int i=0;i<n;i++){
    cin>>arr[i];

}
int maxx=1;

for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1] ) {
            maxx=max(cnt,maxx);
        cnt=1;

    }
    else cnt++;
   // cout<<cnt<<endl;
}

maxx= max(cnt,maxx);
cout<<maxx<<endl;

return 0;
}


