#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,s2;
    int flag;
    cin>>t;
    while(t--)
    {
        cin>>s;
        string s2=s;
          reverse(s.begin(),s.end());
       if(s!=s2){
            cout<<s<<endl;
            continue;
        }
//string s2= s;
        else
        {
            flag=0;
            while( next_permutation(s.begin(),s.end()) )
            {
              //  flag=0;
                bool val=next_permutation(s.begin(),s.end());
                if(val==1)
                {
                    string s3= s;
                    reverse(s.begin(),s.end());
                    if(s3!=s){
                    flag=1;
                   // cout<<flag<<endl;
                    cout<<s<<endl;
                    break;
                    }
                }
            }
            if(flag==0)
            {
                //cout<<flag<<endl;
                cout<<-1<<endl;
            }
        }

    }
    return 0;
}
