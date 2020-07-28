#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
string s;

cin>>n;
cin>>s;

int b=0;

for(int i=0;i<s.size();i++){
    if(s[i]=='(')
        {
            b++;
            cout<<b%2;

        }
else
        {

            cout<<b%2;
                 b--;
        }

}
cout<<endl;
return 0;
}
