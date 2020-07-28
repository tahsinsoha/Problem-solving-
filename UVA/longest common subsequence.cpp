#include<bits/stdc++.h>
using namespace std;
string s , m;
//int lcs[1010][1010];
int main(){
//cin>>s;
//int sz=s.size();
while (getline(cin,s)){
    getline(cin,m);
    int lcs[1010][1010];
        int sz=s.size();
        int mz=m.size();
for(int i=0;i<=sz;i++){
    for(int j=0;j<=mz;j++){
           if(i==0||j==0) lcs[i][j]=0;
       else if(s[i-1]==m[j-1]) lcs[i][j]=1+lcs[i-1][j-1];
        else {
            lcs[i][j]= max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
}
cout<<lcs[sz][mz]<<endl;
}

return 0;
}
