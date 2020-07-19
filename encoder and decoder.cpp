#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool f= 0;
    while(getline(cin,s))
    {
        //if(f)
            //cout<<endl;
       // f= 1;
        // getline(cin,s);
        //getchar();
        if((s[0]>='a' && s[0]<='z') || (s[0]>='A' &&s[0]<= 'Z'))
        {

            for(int i=s.size()-1; i>=0; i--)
            {
                int g =  int(s[i]);
                string str = to_string(g);
                reverse(str.begin(),str.end());
                cout<<str;
            }
           // cout<<endl;
        }
        else if(s[0]>='0' && s[0]<='9')
        {
            reverse(s.begin(),s.end());
            // cout<<s<<endl;
            // stoi(s);
            //cout<<s<<endl;
            for(int i=0; i<s.size();)
            {
                int sum=0;
                // cout<<s[i]<<endl;
                // cout<<int(s[i]-'0')<<endl;
                if(s[i]=='1')
                {
                    sum=sum+ int(s[i]-'0')*100;
                    sum=sum+ int(s[i+1]-'0')*10;
                    sum=sum+int(s[i+2]-'0');
                    i=i+3;
                    //cout<<sum<<endl;
                    cout<<char(sum);
                }
                else
                {
                    sum=sum+int(s[i]-'0')*10;
                    sum=sum+int(s[i+1]-'0');
                    i=i+2;
                    //cout<<sum<<endl;
                    cout<<char(sum);
                }
            }
            //cout<<endl;
        }
       // getchar();
       cout<<endl;
    }


    return 0;
}
