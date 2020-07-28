#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,flag=0,k;
    char c;
    vector<char>v;
    string s;
    set<char>sett;
    cin>>s;
    if(s.size()<26){
        cout<<-1<<endl;
        return 0;
    }

    for(i = 0; i <= s.size()-26; i++)
    {
        int cont=0;
        for( j=i; j<=(i+25); j++)
        {
            if(s[j]=='?')
            {
                    cont++;
                continue;
            }
            else
                sett.insert(s[j]);
        }
        if(sett.size()==(26-cont))
        {
            /// Extra

            vector < char > q;
            int winn=0;
            for(int k = 0 ; k < 26 ; k++) {
                if(sett.count((char)('A' + k)) == false) {
                    q.push_back((char)('A'+k));
                }
            }
            for(int j = i ; j <= (i + 25) ; j++) {
                if(s[j] == '?') {
                    s[j] = q[winn];
                    winn++;
                }
            }


            flag=1;
            break;
        }
        else
           sett.clear();

    }
    if(flag==1){
        for(int j = 0 ; j < s.size() ; j++) {
            if(s[j] == '?') {
                s[j] = 'A';
            }
        }
        cout << s << endl;
    }
    else cout<<-1<<endl;

    return 0;
}
