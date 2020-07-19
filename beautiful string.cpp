#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;
    cin>>t;
    long long int n,k;
    string s;

    while(t--)
    {
        cin>>s;
        int n  = s.size();
        int flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='?') flag=1;
        }
        for(int i=1; i<s.size()-1; i++)
        {
          //  if(s[i]!='?') flag=1;

            if(s[i]=='?')
            {
               // cout<<s[i]<<endl;
                if(s[i-1]!=s[i+1])
                {

                    if( (s[i-1]=='b' && s[i+1]=='a') || (s[i-1]=='a'&& s[i+1]=='b') )
                        s[i]='c';
                    if( (s[i-1]=='c' && s[i+1]=='a') || (s[i-1]=='a'&& s[i+1]=='c') )
                        s[i]='b';
                    if( (s[i-1]=='b' && s[i+1]=='c') || (s[i-1]=='c'&& s[i+1]=='b') )
                        s[i]='a';
                    if( (s[i-1]=='?' && s[i+1]=='c') || (s[i-1]=='c'&& s[i+1]=='?') )
                        s[i]='a';
                    if( (s[i-1]=='?' && s[i+1]=='b') || (s[i-1]=='b'&& s[i+1]=='?') )
                        s[i]='c';

                    if( (s[i-1]=='?' && s[i+1]=='a') || (s[i-1]=='a'&& s[i+1]=='?') )
                        s[i]='b';

                    if( (s[i-1]=='a' && s[i+1]=='a') )
                        s[i]='b';
                    if( (s[i-1]=='b' && s[i+1]=='b')  )
                        s[i]='c';
                }

                else
                {

                    if( (s[i-1]=='a' && s[i+1]=='a') )
                        s[i]='b';
                    if( (s[i-1]=='b' && s[i+1]=='b')  )
                        s[i]='c';

                    if( (s[i-1]=='c' && s[i+1]=='c')  )
                        s[i]='a';

                        if(s[i-1]=='?' && s[i+1]=='?') s[i]='a';
                }
            }
        }
    if(!flag){
        for(int i=0;i<s.size();i++){
            if(i%2) cout<<'a';
            else cout<<'b';


        }
        cout<<endl;
        continue;
    }
    flag=0;

        if(s[0]=='?')
        {

            if(s[1]=='a')
                s[0]='b';
            if(s[1]=='b')
                s[0]='c';
            if(s[1]=='c')
                s[0]='a';
        }
        if(s[n-1]=='?')
        {

            if(s[n-2]=='a')
                s[n-1]='b';
            if(s[n-2]=='b')
                s[n-1]='c';
            if(s[n-2]=='c')
                s[n-1]='a';
        }



        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1] )
            {
                flag=1;
                cout<<-1<<endl;

                break;
            }
        }
        if(flag==1)
            continue;
        else
            cout<<s<<endl;
    }
    return 0;
}







