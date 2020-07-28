#include<bits/stdc++.h>
using namespace std;
int main(){
int n,cont=0;
cin>>n;
int arr[n+5];
for(int i=0;i<n;i++) cin>>arr[i];
vector<char>v;
int i= 0, j= n-1;
//int cont=0;
char c;
if(arr[i]<arr[j]) {
        v.push_back('L');
          j--;
}
else {
        v.push_back('L');
i++;
}

cont++;
while(i<=n-1 && j>=0){
    if(arr[i]>arr[j]) {
        cont++;
        v.push_back('L');
        i++;
    }
    else {
        cont++;
          v.push_back('R');
          j--;
    }
}
cout<<cont<<endl;
for(int i=0;i<v.size();i++) cout<<v[i];
cout<<endl;
return 0;
}
