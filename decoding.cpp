#include<bits/stdc++.h>
using namespace std;
vector<char>v;
int main()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s;
    for(int i=0;i<n;i++){
        if((n-i)%2==1){
            s1=s1+s[i];
        }
        else s1= s[i]+s1;
    }
    cout<<s1<<endl;
    return 0;
}
