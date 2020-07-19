#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,ans=1000000000;
string s;
cin>>n>>s;
for(int i=0; i<=n-4;i++){
        int sum=0;
    for(int j=i;j<i+4;j++){
            if(j==i){
               // if(s[j]=='Z') sum++;

                int a = int(abs(s[j]-'A'));
                int b = int(abs('Z'-s[j])) +1 ;
                 sum = sum+ min(a,b);
                // cout<<a<<" "<<b<<endl;

            }
            if(j==(i+1)){
                     int a = int(abs(s[j]-'C'));
               int b =  int(abs('Z'-s[j]))+3  ;
                 sum = sum+ min(a,b);
                 //  cout<<a<<" "<<b<<endl;

            }
          if(j==(i+2)){
                int a = int(abs(s[j]-'T'));
                int b =  int(abs('A'-s[j])) +int(abs('Z'-'T'))+1 ;
                 sum = sum+ min(a,b);
                // cout<<a<<" "<<b<<endl;
            }
            if(j==(i+3)){
                   int a = int(abs(s[j]-'G'));
              int b =  int(abs('Z'-s[j]))+7  ;
             // int b =  int(abs('H'-s[j]))+7  ;
                 sum = sum+ min(a,b);
                 //cout<<a<<" "<<b<<endl;
            }


    }
   // cout<<sum<<endl;
    ans=min(ans,sum);

}
cout<<ans<<endl;
return 0;
}



