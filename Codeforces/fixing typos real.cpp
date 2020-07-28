#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,s1="",s2="";

cin>>s;

if(s.size()==1) {
    cout<<s<<endl;
    return 0;
}

if(s.size()==2) {
    cout<<s<<endl;
    return 0;
}

s1+=s[0];
s1+=s[1];
//cout<<s1<<endl;
int j=2;
    for(int i=2;i<s.size();i++){

        if(s1[j-1]==s1[j-2]  && s[i]==s1[j-1])
            continue;

        s1+=s[i],j++;
    }
//cout<<s1<<endl;
if(s1.size()>=3){
    s2+=s1[0];
     s2+=s1[1];
      s2+=s1[2];
}
else {
    cout<<s1<<endl;
    return 0;
}

    j=3;
 for(int i=3;i<s1.size();i++){

        if(s1[i]==s2[j-1]  && s2[j-2]==s2[j-3])
            continue;

        s2+=s1[i],j++;
    }

    cout<<s2<<endl;
    return 0;
}

