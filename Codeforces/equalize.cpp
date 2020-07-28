#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int n;
    cin>>n;
    cin>>s>>t;
long long c=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=t[i]){
            if(s[i+1]==t[i+1] ){
                c+=1;

            }
           else   if(s[i+1]!=t[i+1] && s[i+1]!=s[i] ){
                c+=1;
                swap(s[i],s[i+1]);
            }
             else   if(s[i+1]!=t[i+1] && s[i+1]==s[i] ){
                c+=1;

            }
        }
    }
    if(s[n-1]!=t[n-1])
        c+=1;
    cout<<c<<endl;
   return 0;
}









