#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;
    cin>>t;
    int n,k;
    string s;
    while(t--)
    {
        string t;
        string ans="";
        cin>>s;
        t=s;
        reverse(t.begin(),t.end());
        int k=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i]) {
                ans+=s[i];
                 k=i;
            }
        }
        int m = k+1;
        string mid="";
       for(int i=k+1;i<s.size();i++){
              if(s[i]==t[m])

       }



    }




    return 0;
}




