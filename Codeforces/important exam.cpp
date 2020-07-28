#include<bits/stdc++.h>
using namespace std;
int arr[1010];
map<char,int>mp;
char grid[1010][1010];
string s;
int main(){
int n,m;

cin>>n>>m;

for(int i=0;i<n;i++)
{
    cin>>grid[i];
}
int sum=0;
for(int i=0;i<m;i++)
    cin>>arr[i];
    int mx;
for(int j=0;j<m;j++){
        mx=0;
    for(int i=0;i<n;i++){
        mp[grid[i][j]]++;
    }
mx=max (mp['E'],(max(mp['D'],(max(mp['C'],(max(mp['A'],mp['B'])))))));
mp.clear();
sum=sum+ mx*arr[j];
}
cout<<sum<<endl;
return 0;
}
