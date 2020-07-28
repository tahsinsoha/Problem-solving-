#include<bits/stdc++.h>
using namespace std;
int main(){
int l,k;
string s;
int t,cont,cont2;
char temp;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>l>>k;
    cin>>s;
    int minn=INT_MAX;
    int minn2 = INT_MAX;
for(int i=0;i<=s.size()-k;i++){
       cont=0;
       temp=s[i];
    for(int j=i+1;j<i+k;j++){
        if(temp=='R'){
            if(s[j]!='G') cont++;
            temp='G';
        }
       else if(temp=='G'){
            if(s[j]!='B') cont++;
            temp='B';
        }
         else if(temp=='B'){
            if(s[j]!='R') cont++;
            temp='R';
        }
    }

   // cout<<cont<<endl;
minn= min(minn,cont);
}
for(int i=0;i<=s.size()-k;i++){
       cont2=0;
       temp=s[i+k-1];
    for(int j=i+k-2;j>=i;j--){
        if(temp=='R'){
            if(s[j]!='B') cont2++;
            temp='B';
           // cout<<cont2<<endl;
        }
       else if(temp=='G'){
            if(s[j]!='R') cont2++;
            temp='R';
           // cout<<cont2<<endl;
        }
         else if(temp=='B'){
            if(s[j]!='G') cont2++;
            temp='G';
           // cout<<cont2<<endl;
        }
    }

   // cout<<cont2<<endl;
minn2= min(minn2,cont2);
}
//cout<<minn<<minn2<<endl;
cout<<min(minn,minn2)<<endl;
}


return 0;
}
